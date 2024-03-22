/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/21 14:16:33 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* to sort in ascending order numbers into stack 'a' */
void	push_swap(t_stack **a, t_stack **b, int argc)
{
	if (!is_stack_sorted(*a))
	{
		if (argc == 2)
			sa(a);
		else if (argc == 3)
			sort_three(a);
		else
			sort_stack(a, b);
	}
	if (*a)
		print_stack(*a);
	if (*b)
		print_stack(*b);
}
