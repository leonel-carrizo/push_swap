/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:14:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/26 22:28:37 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stack(t_stack *stack)
{
	if (stack)
	{
		while (stack->value)
		{
			ft_putnbr_fd(stack->value, 1);
			ft_putchar_fd('\n', 1);
			stack = stack->next;
		}
	}
}
