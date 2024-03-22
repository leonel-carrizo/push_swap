/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:20:47 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/21 17:09:03 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
