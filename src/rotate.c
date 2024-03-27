/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:51:32 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/27 21:21:22 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
Shift up all elements of an stack by 1.
The first element becomes the last one.
*/
static void	rotate(t_stack **stack)
{
	t_stack	*last_element;

	if (!*stack || !(*stack)->next)
		return ;
	last_element = find_last_element(*stack);
	last_element->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_element->next->prev = last_element;
	last_element->next->next = NULL;
}

/* Shift up all elements of stack 'a' by 1. */
void	ra(t_stack **a)
{
	if (!a)
		return ;
	rotate(a);
	ft_putstr("ra\n");
}

/* Shift up all elements of stack 'b' by 1. */
void	rb(t_stack **b)
{
	if (!b)
		return ;
	rotate(b);
	ft_putstr("rb\n");
}

/* 'ra' and 'rb' at the same time.  */
void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}

/* Rotate like rr but just the node which is closet_value to stack */
void	rotate_both(t_stack **a, t_stack **b, t_stack *closet)
{
	while (*b != closet->closet_value && *a != closet)
		rr(a, b);
	set_position(*a);
	set_position(*b);
}
