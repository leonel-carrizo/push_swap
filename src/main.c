/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:42 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/24 16:12:02 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
//#include "../lib/libft/libft.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	//t_stack	*b;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	// if the argumente is given with '" "' split it by spaces.
	else if (argc == 2)
		//argv is changed for array of nubers.
		argv = ft_split(argv[1], ' ');
	// if there are a list of argv add to stack.
	add_to_stack(&a, argv + 1);
//	print_stack(*a)	
//	if (!is_sorted(a))
//	{
//
//		push_swap(&a, &b);
//	}
	// free stacks.
	return (0);
}
