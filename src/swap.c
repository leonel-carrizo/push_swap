/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:18:34 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/22 14:26:36 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* swap two elements on top of stack */
static void	swap(t_stack **stack)
{
	if (!stack || !(*stack)->next)
		return ;
	*stack = (*stack)->next;
	(*stack)->prev->prev = *stack;
	(*stack)->prev->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->prev = (*stack)->prev;
	(*stack)->next = (*stack)->prev;
	(*stack)->prev = NULL;
}

/* swap two nodes on the top of the stack a */
void	sa(t_stack **a)
{
	if (!a)
	{
		ft_putstr_fd("ERROR returning on 'sa'\n", 2);
		return ;
	}
	swap(a);
	ft_putstr("sa\n");
}

/* swap two nodes on the top of the stack b */
void	sb(t_stack **b)
{
	if (!b)
	{
		ft_putstr_fd("ERROR returning on 'sb'\n", 2);
		return ;
	}
	swap(b);
	ft_putstr_fd("sb\n", 1);
}

/* swap two nodes on the top of the stacks a and b simulta simultaneously */
void	ss(t_stack **a, t_stack **b)
{
	if (!a || !b)
	{
		ft_putstr_fd("ERROR returning on 'ss'\n", 2);
		return ;
	}
	swap(a);
	swap(b);
	ft_putstr_fd("ss\n", 1);
}
