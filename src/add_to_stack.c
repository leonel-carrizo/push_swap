/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:56:19 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/26 20:21:45 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*·check·if·an·argument·is·dnferent·than·an·Integer·*/↓
static int	not_integer(char *argv)
{
	int	i;
	long	value;

	if (!*argv)
		return (0);
	i = 0;
	while (argv)
	{
		value = ft_atol(argv[i]);
		if (value < INT_MIN || value > INT_MAX)
			return(1);
		i++;
	}
	return (0);
}

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
