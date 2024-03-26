/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 18:59:42 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/24 17:49:43 by lcarrizo         ###    ###london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Check how many elements are in an array */
static int	array_elements(char **argv)
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

/* Frees an array that has been acllocated with the split functio */
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
		exit(EXIT_FAILURE);
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
	if (!a)
		exit(EXIT_FAILURE);
	else
		push_swap(&a, &b, stack_len(a));
	clean_stack(&a);
	return (0);
}
