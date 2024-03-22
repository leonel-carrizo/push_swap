/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:30:16 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/22 16:31:35 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "stdio.h"

void	ft_printarg(char **argv)
{
	if (!argv[1][0])
		return ;
	while (*argv)
		printf("%s\n", *argv++);
}

void	print_stack(t_stack *stack)
{
	if (stack)
	{
		ft_putstr("\n### STACK A ###\n");
		while (stack)
		{
			ft_putnbr_fd(stack->value, 1);
			ft_putchar_fd('\n', 1);
			stack = stack->next;
		}
	}
}
