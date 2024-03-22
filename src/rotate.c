/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 12:51:32 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/21 13:52:38 by lcarrizo         ###    ###london.com    */
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

	if (!*stack || (*stack)->next)
		return ;
	last_element = find_last_element(*stack);
	last_element->next = *stack;
	*stack = (*stack)->next;
	(*stack)->next = NULL;
	last_element->next->prev = last_element;
	last_element->next->next = NULL;
}

/*
Shift up all elements of stack 'a' by 1.
*/
void	ra(t_stack **a)
{
	if (!a)
		return ;
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}

/*
Shift up all elements of stack 'b' by 1.
*/
void	rb(t_stack **b)
{
	if (!b)
		return ;
	rotate(b);
	ft_putstr("rb\n");
}

/*
'ra' and 'rb' at the same time.
 */
void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putstr("rr\n");
}
