/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:56:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/26 22:24:05 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*·check·if·an·argument·is·dnferent·than·an·Integer·*/
static int	not_integer(int nbr)
{
	if (nbr < INT_MIN || nbr > INT_MAX)
		return (1);
	return (0);
}

/* add a new node to the stack with the value given */
void	add_node(t_stack **stack, int value)
{
	t_stack	*new_node;

	new_node = NULL;
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = NULL;
	if (!stack)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while ((*stack)->next)
			*stack = (*stack)->next;
		(*stack)->next = new_node;
	}
}

/* add the number given as arguments and to the stack */
void	add_to_stack(t_stack **a, char **argv)
{
	int	i;
	long	nbr;

	if (!argv)
		return ;
	if (check_errors(argv))
	{
		error_message("Error");
		// free if allocated something.
		return ;
	}
	i = 0;
	while (argv[i])
	{
		nbr = ft_atol(argv[i]);
		if (not_integer((int)nbr))
			error_message("Error");
		else
			add_node(a, nbr);
	i++;
	}
}
