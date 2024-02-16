/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/16 19:49:24 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

// create structs for staks a and b.
typedef struct s_stack
{
	int		value;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;


// functions
void	push_swap(t_stack **a, t_stack **b);
// swap nodes
// rotate nodes
// push nodes stack to stack 



#endif
