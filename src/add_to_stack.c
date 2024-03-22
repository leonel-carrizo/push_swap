/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:56:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/21 17:28:17 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* add a new node to the stack with the value given */
void	add_node(t_stack **stack, int value)
{
	t_stack	*new_node;
	t_stack	*last_node;

	last_node = *stack;
	new_node = NULL;
	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = NULL;
	if (!*stack)
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
		while (last_node->next)
			last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
}

/* convert arg in INT into an array, check valid  numbers */
long	*get_numbers(char **argv, int argc)
{
	int		i;
	long	*num;

	num = NULL;
	num = (long *)malloc(sizeof(long) * (argc + 1));
	if (!num)
		return (NULL);
	i = 0;
	while (argv[i])
	{
		num[i] = ft_atol(argv[i]);
		if (num[i] > 2147483647 || num[i] < -2147483647)
		{
			error_message("Error");
			free(num);
			return (NULL);
		}
		i++;
	}
	num[i] = '\0';
	return (num);
}

/* Add the number given as arguments and to the stack */
void	add_to_stack(t_stack **a, char **argv, int argc)
{
	int		i;
	long	*nbrs;

	if (check_errors(argv))
	{
		error_message("Error");
		return ;
	}
	i = 0;
	nbrs = get_numbers(argv, argc);
	if (!is_sorted(nbrs, argc) && nbrs)
	{
		while (i < argc)
		{
			add_node(a, nbrs[i]);
			i++;
		}
	}
	free(nbrs);
}
