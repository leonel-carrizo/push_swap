/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:20:47 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/04/01 21:06:35 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Check if the elements in the satck are sorted, return 1 if true */
int	is_stack_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

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

/* It sets the minimun number in the top of the stack A */
static void	set_min_on_top(t_stack **a)
{
	while ((*a)->value != find_smallest(*a)->value)
	{
		if (find_smallest(*a)->is_above)
			ra(a);
		else
			rra(a);
	}
}

void	sort_stack(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_len(*a);
	if (!is_stack_sorted(*a) && len-- > 3)
		pb(b, a);
	if (!is_stack_sorted(*a) && len-- > 3)
		pb(b, a);
	while (!is_stack_sorted(*a) && len-- > 3)
	{
		set_node_values(*a, *b, 'a');
		push_node(a, b);
	}
	sort_three(a);
	while (*b)
	{
		set_node_values(*a, *b, 'b');
		set_node_on_top(a, (*b)->closet_value, 'a');
		pa(a, b);
	}
	set_position(*a);
	set_min_on_top(a);
}
