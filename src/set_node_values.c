/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_node_values.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:00:16 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/04/02 03:12:34 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* sets the number of moves to move a node from src_stack to dst_stack */
static void	set_num_moves(t_stack *src, t_stack *dst)
{
	int	len_a;
	int	len_b;

	len_a = stack_len(src);
	len_b = stack_len(dst);
	while (src)
	{
		src->n_moves = src->index;
		if (src->is_above == 0)
			src->n_moves = len_a - (src->index);
		if (src->closet_value->is_above == 1)
			src->n_moves += src->closet_value->index;
		else
			src->n_moves += len_b - (src->closet_value->index);
		src = src->next;
	}
}

/* Set value 1 in an node which have the less moves to be pushed */
static void	set_less_mov(t_stack *stack)
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

/* Sets the closet value for stack B in the stack A */
static void	set_closet_value_b(t_stack *a, t_stack *b)
{
	t_stack	*posit_a;
	t_stack	*closet_node;
	long	closet_index;

	while (b)
	{
		closet_index = LONG_MAX;
		posit_a = a;
		while (posit_a)
		{
			if (posit_a->value > b->value
				&& posit_a->value < closet_index)
			{
				closet_index = posit_a->value;
				closet_node = posit_a;
			}
			posit_a = posit_a->next;
		}
		if (closet_index == LONG_MAX)
			b->closet_value = find_smallest(a);
		else
			b->closet_value = closet_node;
		b = b->next;
	}
}

/* Sests the closet value of the stack A in stack B */
static void	set_closet_value_a(t_stack *a, t_stack *b)
{
	t_stack	*posit_b;
	t_stack	*closet_node;
	long	closet_index;

	while (a)
	{
		closet_index = LONG_MIN;
		posit_b = b;
		while (posit_b)
		{
			if (posit_b->value < a->value
				&& posit_b->value > closet_index)
			{
				closet_index = posit_b->value;
				closet_node = posit_b;
			}
			posit_b = posit_b->next;
		}
		if (closet_index == LONG_MIN)
			a->closet_value = find_largest(b);
		else
			a->closet_value = closet_node;
		a = a->next;
	}
}

/* Inicializes the values in the node given  */
void	set_node_values(t_stack *a, t_stack *b, char name)
{
	if (name == 'b')
	{
		set_position(a);
		set_position(b);
		set_closet_value_b(a, b);
		return ;
	}
	set_position(a);
	set_position(b);
	set_closet_value_a(a, b);
	set_num_moves(a, b);
	set_less_mov(a);
}
