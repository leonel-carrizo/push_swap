/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:56:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/27 13:54:22 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* free all nodes from a stack given */
void	clean_stack(t_stack **stack)
{
	t_stack *temp;

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
		if (nbr < INT_MIN || nbr > INT_MAX)
		{
			clean_stack(a);
			error_message("Error");
			return ;
		}
		add_node(a, nbr);
		i++;
	}
}
