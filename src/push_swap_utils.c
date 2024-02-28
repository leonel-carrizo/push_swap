/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:19:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/28 13:29:38 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* check if array of INT given are sorted, if true return 1 */
int	is_sorted(int *nbrs)
{
	int	i;

	if (!argv)
		return (0);
	i = 0;
	while (nbrs[i] && nbrs[i + 1])
	{
		if (nbrs[i] > nbrs[i + 1])
			return (0);
		i++;
	}
	return (1);
}
