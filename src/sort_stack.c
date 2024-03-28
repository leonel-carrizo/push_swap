/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:20:47 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/28 13:33:10 by lcarrizo         ###    ###london.com    */
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

void	sort_three(t_stack **stack)
{
	t_stack	*largest;

	if (!*stack)
		return ;
	largest = find_largest(*stack);
	if (largest == *stack)
		ra(stack);
	else if ((*stack)->next == largest)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
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
	print_stack(*a, "A befor to push");
	if (!is_stack_sorted(*a) && len-- > 3)
		pb(b, a);
	print_stack(*b, "B after 1 push");
	if (!is_stack_sorted(*a) && len-- > 3)
		pb(b, a);
	print_stack(*b, "B after 2 push");
	print_stack(*a, "A before sort 3");
	while (!is_stack_sorted(*a) && len-- > 3)
	{
		set_node_values(*a, *b, 'a');
		push_node(a, b);
	}
	sort_three(a);
	print_stack(*b, "B after sort 3");
	print_stack(*a, "A after sort 3");
	while (*b)
	{
		set_node_values(*a, *b, 'b');
		set_node_position(a, (*b)->closet_value, 'a');
		pa(a, b);
	}
	set_position(*a);
	set_min_on_top(a);
}
