/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/09 18:08:17 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "../lib/libft/libft.h"

// create structs for staks a and b.
typedef struct s_stack
{
	int		value;
	int		elemts;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;


// functions
int	main(int argc, char **argv);
void	push_swap(t_stack **a, t_stack **b, int argc);
void 	add_to_stack(t_stack **a, char **argv, int argc);
void	add_node(t_stack **stack, int value);
int	is_sorted(long *nbrs, int argc);
long     *get_numbers(char **argv, int argc);
int	array_elements(char **argv);
int	is_stack_sorted(t_stack *stack);
void	clean_stack(t_stack **stack);
t_stack	*find_last_element(t_stack *stack);
// swap nodes
void	sa(t_stack *a);
void	sb(t_stack *b);

// error managements
void	error_message(const char *message);
int	check_errors(char **argv);
// stack lenght
// how many elements in the stack
// rotate nodes
// push nodes stack to stack

//helpers
void	print_stack(t_stack *stack);
void	ft_printarg(char **argv);

#endif
