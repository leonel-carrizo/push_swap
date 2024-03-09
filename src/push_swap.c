/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/09 17:49:42 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* to sort in ascending order numbers into stack 'a' */
void	push_swap(t_stack **a, t_stack **b, int argc)
{
	if (!is_stack_sorted(*a))
	{
		ft_putstr_fd("esta desordenado\n", 1);
		if(argc == 2)
			// function to order 2 elements
		else if (argc == 3)
			//funciotn to order 3 elements
		else if (argc == 5)
			// funcion to order 5 elements
		else if (argc > 5)
			sort_stack(**a, **b);
	}
	if (*a)
		print_stack(*a);
	if (*b)
		print_stack(*b);
}
