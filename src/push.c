/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 18:07:09 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/04/01 21:49:31 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Push the node on the top of a stack_src to stack_dest */
static void	push(t_stack **stack_src, t_stack **stack_dest)
{
	t_stack	*temp;

	if (!stack_src)
		return ;
	temp = *stack_src;
	*stack_src = (*stack_src)->next;
	if (*stack_src)
		(*stack_src)->prev = NULL;
	temp->prev = NULL;
	if (!*stack_dest)
	{
		*stack_dest = temp;
		temp->next = NULL;
	}
	else
	{
		temp->next = *stack_dest;
		temp->next->prev = temp;
		*stack_dest = temp;
	}
}

/*
 * the first element at the top of 'b' and put it at the top of 'a'.
 * Do nothing if 'b' is empty.
*/
void	pa(t_stack **b, t_stack **a)
{
	if (!b)
		return ;
	push(a, b);
	ft_putstr("pa\n");
}

/*
* the first element at the top of 'a' and put it at the top of 'b'.
* Do nothing if 'a' is empty.
*/
void	pb(t_stack **a, t_stack **b)
{
	if (!a)
		return ;
	push(b, a);
	ft_putstr("pb\n");
}
