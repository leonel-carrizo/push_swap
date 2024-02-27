/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:19:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/27 21:48:44 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* check if the parameter given to the progtram are sorted, if true return 1 */
int	is_sorted(char **argv)
{
	int	i;

	if (!argv)
		return (0);
	i = 0;
	while (argv[i] && argv[i + 1])
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
