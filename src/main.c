/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:42 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/27 14:03:04 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
//#include "../lib/libft/libft.h"

int	main(int argc, char *argv[])
{
	t_stack	*a = NULL;
	//t_stack	*b;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	// if the argumente is given with '" "' split it by spaces.
	if (argc == 2)
	{
		//argv is changed for array of nubers.
		argv = ft_split(argv[1], ' ');
		add_to_stack(&a, argv);
	}
	// if there are a list of argv add to stack.
	else if (argc > 2)
		add_to_stack(&a, argv + 1);
	if (a)
	{
		print_stack(a);
//		push_swap(&a, &b);
	}
	clean_stack(&a);
	return (0);
}
