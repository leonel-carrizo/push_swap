/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:56:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/24 21:18:46 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* create a new node and return a pointer to it */


/* add the number given as arguments and to the stack */
void	add_to_stack(s_stack **a, char **argv)
{
	int	i;
	if (!argv)
		return ;
		// verify error:
	if (check_errors(argv))
	{
		error_message("Error");
		// free if allocated something.
		return ;
	}
	i = 0;
	while (argv)
	{
		//add_node(ft_atol(argv[i]));
		//i++;
	}
	// convertirlo a un numero entero (ft_atol.c)
	// agregar los numero uno por uno en un node del stack.

}
