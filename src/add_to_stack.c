/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:56:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/22 09:15:46 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* add the number given as arguments and to the stack */
void	add_to_stack(s_stack **a, char **argv)
{
	int	i;
	if (a && argv)
	// verify error:
	check_errors(a, argv);
	i = 0;
	while (argv)
	{
		//add_node(ft_atol(argv[i]));
		//i++;
	}
	// convertirlo a un numero entero (ft_atol.c)
	// agregar los numero uno por uno en un node del stack.

}