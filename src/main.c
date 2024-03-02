/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:42 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/02 01:07:11 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	a = NULL;
	b = NULL;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		add_to_stack(&a, argv, argc);
	}
	else if (argc > 2)
		add_to_stack(&a, argv + 1, argc);
	if (a)
	{
		push_swap(&a, &b);
	}
	clean_stack(&a);
	return (0);
}
