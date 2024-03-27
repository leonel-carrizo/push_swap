/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/27 22:24:01 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* position a node at the top of the stack to be push to stack named */
void	set_node_position(t_stack **stack, t_stack *top_node, char name)
{
	while (*stack != top_node)
	{
		if (name == 'a')
		{
			if (top_node->is_above == 1)
				ra(stack);
			else
				rra(stack);
		}
		else if (name == 'b')
		{
			if (top_node->is_above == 1)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

/* Return a pointer to a node which have less moves to be pushed */
t_stack	*get_less_move(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->less_mov)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

/* to sort in ascending order numbers into stack 'a' */
void	push_swap(t_stack **a, t_stack **b, int argc)
{
	if (!is_stack_sorted(*a))
	{
		if (argc == 2)
			sa(a);
		else if (argc == 3)
			sort_three(a);
		else
			sort_stack(a, b);
	}
	if (*a)
		print_stack(*a, "A");
	if (*b)
		print_stack(*b, "B");
}
