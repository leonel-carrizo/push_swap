/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:29:51 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/07 13:46:09 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* print error message */
void	error_message(const char *message)
{
	int	len;

	len = ft_strlen(message);
	write(2, message, len);
	write(2, "\n", 1);
}

/* free all nodes from a stack given */
void	clean_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!stack)
		return ;
	while (*stack)
	{
		temp = *stack;
		temp = temp->next;
		free(*stack);
		*stack = NULL;
		*stack = temp;
	}
}

/* check if array of numbers given are sorted, if true return 1 */
int	is_sorted(long *nbrs, int argc)
{
	int	i;

	if (!nbrs)
		return (1);
	i = 0;
	while (--argc)
	{
		if (nbrs[i] > nbrs[i + 1])
			return (0);
		i++;
	}
	return (1);
}

/* check if the arguments are not value number, if true return 1 otherwise 0 */
static int	wrong_sintax(char **argv)
{
	int	i;
	int	j;

	j = 0;
	while (argv[j])
	{
		if (!(*argv[j] == '-' || *argv[j] == '+'
				|| (*argv[j] >= '0' && *argv[j] <= '9')))
			return (1);
		i = 0;
		if (*argv[j] == '+' || *argv[j] == '-' )
			++i;
		while (argv[j][i])
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
				return (1);
			++i;
		}
		j++;
	}
	return (0);
}

/* check sintax error and if there are duplicated arguments */
int	check_errors(char **argv)
{
	int	i;
	int	j;

	if (wrong_sintax(argv))
		return (1);
	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
