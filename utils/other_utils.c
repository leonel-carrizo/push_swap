/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:30:16 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/28 13:21:45 by lcarrizo         ###    ###london.com    */
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

void	print_stack(t_stack *stack, char *name)
{
	ft_putstr("\n### STACK ");
	ft_putstr(name);
	ft_putstr(" ###\n");
	if (stack)
	{
		while (stack)
		{
			ft_putnbr(stack->value);
			ft_putchar('\n');
			stack = stack->next;
		}
		ft_putchar('\n');
	}
}
