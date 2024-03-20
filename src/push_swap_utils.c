/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:19:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/20 21:04:56 by lcarrizo         ###    ##.london.com    */
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

void	print_stack(t_stack *stack)
{
	if (stack)
	{
		while (stack)
		{
			ft_putnbr_fd(stack->value, 1);
			ft_putchar_fd('\n', 1);
			stack = stack->next;
		}
	}
}

/* Check how many elements are in an array */
int	array_elements(char **argv)
{
	int	num;

	num = 0;
	while (*argv)
	{
		argv++;
		num++;
	}
	return (num);
}

/* return a pointer to the las element in the stack given */
t_stack	*find_last_element(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
