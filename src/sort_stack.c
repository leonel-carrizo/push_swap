/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:20:47 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/26 20:02:22 by lcarrizo         ###   ########.fr       */
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

void	sort_stack(t_stack **a, t_stack **b)
{
	int	len;

	len = stack_len(*a);
	if (!is_stack_sorted(*a) && len-- > 3)
		pb(a, b);
	if (!is_stack_sorted(*a) && len-- > 3)
		pb(a, b);
	while (!is_stack_sorted(*a) && len-- > 3)
	{
		set_node_values(*a, *b);
	}
}
