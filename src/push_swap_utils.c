/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:19:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/21 17:18:25 by lcarrizo         ###    ###london.com    */
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
		ft_putstr("\n#--------- STACK A ----------#\n");
		while (stack)
		{
			ft_putnbr(stack->value);
			ft_putchar('\n');
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

/*
Return a pointer to the largest  number in the stack given
*/
t_stack	*find_largest(t_stack *stack)
{
	long	max;
	t_stack	*largest;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			largest = stack;
		}
		stack = stack->next;
	}
	return (largest);
}
