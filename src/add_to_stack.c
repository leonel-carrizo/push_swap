/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:56:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/01 18:15:08 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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

/* add a new node to the stack with the value given */
void	add_node(t_stack **stack, int value)
{
	t_stack	*new_node;
	t_stack	*last_node;

	last_node = *stack;
	new_node = NULL;
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = NULL;
	if (!*stack)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}

/* convert arg in INT into an array, check valid  numbers */
int	*get_numbers(char **argv, int argc)
{
	int	i;
	int	num[argc];
	int	*temp;

	i = 0;
	while (argv[i])
	{
		num[i] = (int)ft_atol(argv[i]);
		if (num[i] < INT_MIN || num[i] > INT_MAX)
		{
			error_message("Error");
			exit(EXIT_FAILURE);
		}
		i++;
	}
	temp = num;
	return (temp);
}

/* add the number given as arguments and to the stack */
void	add_to_stack(t_stack **a, char **argv, int argc)
{
	int		i;
	int	*nbrs;

	if (check_errors(argv))
	{
		error_message("Error");
		exit(EXIT_FAILURE) ;
	}
	i = 0;
	nbrs = get_numbers(argv, argc);
	if (!is_sorted(nbrs))
	{
		while (nbrs[i])
		{
			add_node(a, nbrs[i]);
			i++;
		}
	}
}
