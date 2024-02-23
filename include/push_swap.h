/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/23 13:32:49 by lcarrizo         ###   ########.fr       */
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
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;


// functions
void	push_swap(t_stack **a, t_stack **b);
void 	add_to_stack(t_stack **a, char **argv);
int	is_sorted(t_stack *a);

// error managements
void	ft_error(void);
int check_errors(t_stack **a, char **argv);
// stack lenght
// how many elements in the stack
// are the elements sorted?
// clean node
// swap nodes
// rotate nodes
// push nodes stack to stack 

//helpers
void	print_stack(t_stack *stack);

#endif
