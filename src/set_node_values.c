/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_node_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:00:16 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/28 12:44:55 by lcarrizo         ###    ###london.com    */
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

/* Sests the closet value of the src_stack in dst_stack */
void	set_closet_value(t_stack *src_stack, t_stack *dst_stack, long n)
{
	t_stack	*posit_dst;
	t_stack	*closet_node;
	long	closet_index;

	while (src_stack)
	{
		closet_index = n;
		posit_dst = dst_stack;
		while (posit_dst)
		{
			if (posit_dst->value < src_stack->value
				&& posit_dst->value > closet_index)
			{
				closet_index = posit_dst->value;
				closet_node = posit_dst;
			}
			posit_dst = posit_dst->next;
		}
		if (closet_index == n)
			src_stack->closet_value = find_largest(dst_stack);
		else
			src_stack->closet_value = closet_node;
		src_stack = src_stack->next;
	}
}

/* sets the number of moves to move a node from src_stack to dst_stack */
void	set_num_moves(t_stack *src_stack, t_stack *dst_stack)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(src_stack);
	len_b = stack_len(dst_stack);
	while (src_stack)
	{
		src_stack->n_moves = src_stack->index;
		if (src_stack->is_above == 0)
			src_stack->n_moves = len_a - (src_stack->index);
		if (src_stack->closet_value->is_above == 1)
			src_stack->n_moves += src_stack->closet_value->index;
		else
			src_stack += len_b - (src_stack->closet_value->index);
		src_stack = src_stack->next;
	}
}

/* Set value 1 in an node which have the less moves to be pushed */
void	set_less_mov(t_stack *stack)
{
	long	less_mov;
	t_stack	*less_mov_node;

	if (!stack)
		return ;
	less_mov = LONG_MAX;
	while (stack)
	{
		if (stack->n_moves < less_mov)
		{
			less_mov = stack->n_moves;
			less_mov_node = stack;
		}
		stack = stack->next;
	}
	less_mov_node->less_mov = 1;
}

/* Inicializes the values in the node given  */
void	set_node_values(t_stack *a, t_stack *b, char name)
{
	if (name == 'a')
	{
		set_position(a);
		set_position(b);
		set_closet_value(a, b, LONG_MIN);
		set_num_moves(a, b);
		set_less_mov(a);
	}
	else if (name == 'b')
	{
		set_position(a);
		set_position(b);
		set_closet_value(b, a, LONG_MAX);
	}
}
