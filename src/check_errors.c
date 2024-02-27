/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 21:29:51 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/27 13:26:04 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* check if the arguments are not value number, if true return 1 otherwise 0 */
static int	wrong_sintax(char **argv)
{
	int	i;
	int	j;

	j = 0;
	while (argv[j])
	{
		if (!(*argv[j] == '-' || *argv[j] == '+' 
		|| (*argv[j] >= '0' && *argv[j] <= '9')))
			return (1);
		i = 0;
		if (*argv[i] == '+' || *argv[i] == '-' )
			++i;
		while (argv[j][i])
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
				return (1);
			++i;
		}
		j++;
	}
	return (0);
}

/* grap to check error in the arguments given to the program */
int	check_errors(char **argv)
{
	int	i;
	int	j;

	if (wrong_sintax(argv))
		return (1);
	i = 0;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
