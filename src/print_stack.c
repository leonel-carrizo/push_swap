/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:14:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/23 13:25:38 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_stack(t_stack *stack)
{
	int	i;

	if (stack)
	{
		i = 0;
		while (stack->value)
		{
			ft_putstr_fd(stack->value, 1);
			ft_putchar_fd("\n", 1);
		}
	}
}
