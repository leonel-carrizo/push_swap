/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:42 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/06 00:47:52 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* ffrees an array that has been acllocated with the split functio */
static void	free_array(char **argv)
{
	char	**temp;

	if (!argv)
		return ;
	temp = argv;
	while (*temp != NULL)
		free(*temp++);
	free(argv);
}

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	a = NULL;
	b = NULL;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		add_to_stack(&a, argv, array_elements(argv));
		free_array(argv);
	}
	else if (argc > 2)
		add_to_stack(&a, argv + 1, argc - 1);
	if (a)
	{
		push_swap(&a, &b);
	}
	clean_stack(&a);
	return (0);
}
