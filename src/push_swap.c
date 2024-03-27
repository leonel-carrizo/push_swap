/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/27 20:59:06 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Prepare node to push */

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
