/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 13:26:55 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/23 13:31:11 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "stdio.h"

void	ft_printarg(char **argv)
{
	if (!argv[1][0])
		return ;
	while (*argv)
		printf("%s\n", *argv++);
}
