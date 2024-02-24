/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 09:07:07 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/24 18:22:42 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "../include/push_swap.h"

static	int	are_duplicates(char **argv)
{

	return ();
}

static int	not_integer(char *argv)
{
	int	i;
	long	value;

	if (!*argv)
		return (0);
	i = 0;
	while (argv[i])
	{
		value = ft_atol(argv[i]);
		if (value )
	}
	return ();
}

static int	wrong_sintax(char **argv)
{
	int	i;
	int	j;

	j = 0;
	while (argv[j])
	{
		if !((argv[j] == '-' || argv[j] == '+') || (argv >='0' && argv == '9'))
			return (1);
		i = 0;
		if (*argv[i] == '+' || *argv[i] == '-' )
			++i;
		while (*argv[i])
		{
			if (*argv[i] < '0' || *argv[i] > '9'')
				return (1);
			++i;
		}
		j++;
	}
	return (0);
}

int	check_errors(char **argv)
{
	int	i;
	// sintax errors, there are chars insted of numbers
	if (wrong_sintax(argv))
		return (1);
	// there are not numbers
	i = 0;
	while (*argv[i])
	{
		if(not_integer(*argv[i]))
			return (1);
		i++;
	}
	// number are twist
	// number different than INT_MAX / INT_MIN
	return (0);
}
