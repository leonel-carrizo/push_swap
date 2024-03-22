/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:11:43 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/21 13:04:35 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
Shift down all elements of stack given by 1.
The last element becomes the first one.
*/
void	reverse_rotate(t_stack **stack)
{
	t_stack	*last_element;

	if (!*stack || (*stack)->next)
		return ;
	last_element = find_last_element(*stack);
	last_element->prev->next = NULL;
	last_element->next = *stack;
	last_element->prev = NULL;
	*stack = last_element;
	last_element->next->prev = last_element;
}

/* Shift down all elements of stack 'a' by 1 */
void	rra(t_stack **a)
{
	reverse_rotate(a);
	ft_putstr("rra\n");
}

/* Shift down all elements of stack 'b' by 1 */
void	rrb(t_stack **b)
{
	reverse_rotate(b);
	ft_putstr("rrb\n");
}

/* rra and rrb at the same time. */
void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	ft_putstr("rrr\n");
}
