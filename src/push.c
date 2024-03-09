/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:07:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/09 12:37:54 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* push the node on the top of a stack_src to stack_dest */
static void	push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack	*temp;

	if (!stack_src)
	{
		ft_putstr_fd("ERROR returning on 'push'\n");
		return ;
	}
	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	if (*stack_src)
		(*stac_src)->prev = NULL;
	temp->prev = NULL;
	if (!stack_dest)
	{
		*stack_dest = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *stack_dest;
		temp->prev->next = temp;
		*stack_dest = temp;
	}
}

/*
 * ake the first element at the top of b and put it at the top of 'a'.
 * Do nothing if 'b' is empty.
*/
void	pa(t_stack **b, t_stack **a)
{
	if (!b)
		return ;
	push(a, b);
	ft_putstr_fd("pa", 1);
}

/*
* ake the first element at the top of 'a' and put it at the top of 'b'.
* Do nothing if 'a' is empty.
*/
void	pb(s_stack **a, t_stack **b)
{
	if (!a)
		return ;
	push(b, a);
	ft_putstr_fd("pb", 1);
}
