/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 13:47:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/27 22:23:15 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include "../lib/libft/libft.h"

// structs for staks a and b.
typedef struct s_stack
{
	int				value;
	int				index;
	int				n_moves;
	int				is_above;
	int				less_mov;
	struct s_stack	*closet_value;
	struct s_stack	*next;
	struct s_stack	*prev;
}			t_stack;

// general functions
t_stack		*find_last_element(t_stack *stack);
t_stack		*find_largest(t_stack *stack);
t_stack		*get_less_move(t_stack *stack);
int			main(int argc, char **argv);
int			check_errors(char **argv);
int			is_stack_sorted(t_stack *stack);
int			stack_len(t_stack *stack);
void		add_to_stack(t_stack **a, char **argv, int argc);
void		clean_stack(t_stack **stack);
void		error_message(const char *message);
void		push_swap(t_stack **a, t_stack **b, int argc);
void		sort_three(t_stack **stack);
void		sort_stack(t_stack **a, t_stack **b);
void		set_node_values(t_stack *a, t_stack *b);
void		set_position(t_stack *stack);
void		set_close_value(t_stack *src_stack, t_stack *dst_stack);
void		set_node_position(t_stack **stack, t_stack *top_node, char name);
void		push_node(t_stack **src, t_stack **dst);

// commands
void		pa(t_stack **b, t_stack **a);
void		pb(t_stack **a, t_stack **b);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);
void		rotate_both(t_stack **a, t_stack **b, t_stack *closet);
void		reverse_rotate_both(t_stack **a, t_stack **b, t_stack *closet);

// helpers/utils
void		print_stack(t_stack *stack, char *name);
void		ft_printarg(char **argv);

#endif
