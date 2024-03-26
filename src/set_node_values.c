/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_node_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:00:16 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/26 12:13:29 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Sets whether the node position is below the middle of the stack */
void	set_position(t_stack *stack)
{
	int	i;
	int	middle;

	i = 0;
	if (!stack)
		return ;
	middle = stack_len(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= middle)
			stack->is_above = 1;
		else
			stack->is_above = 0;
		stack = stack->next;
		i++;
	}
}

/* Inicializes the values in the node given as the firt argument */
void	set_node_values(t_stack *a, t_stack *b)
{
	set_position(a);
}
