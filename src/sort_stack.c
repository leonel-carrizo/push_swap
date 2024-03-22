/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:20:47 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/22 17:01:27 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


/* Check if the elements in the satck are sorted, return 1 if true */
int	is_stack_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack)
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
	if (a || b)
		ft_putstr("Soy la funcion sort_stack\n");
}
