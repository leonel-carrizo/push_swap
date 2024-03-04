/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:19:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/04 13:44:52 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* check if array of INT given are sorted, if true return 1 */
int	is_sorted(int *nbrs)
{
	int	i;
	int	*temp;

	if (!nbrs)
		return (0);
	i = 0;
	temp = nbrs;
	while (temp[i])
	{
		if (temp[i] > nbrs[i + 1])
			return (0);
		i++;
	}
	return (1);
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

