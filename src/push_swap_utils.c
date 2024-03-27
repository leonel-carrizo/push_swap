/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:19:26 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/03/27 22:25:04 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Push the node on the top of src to the top of dst stack */
void	push_node(t_stack **src, t_stack **dst)
{
	t_stack	*less_mov;

	less_mov = get_less_move(*src);
	if (less_mov->is_above == 1 && less_mov->closet_value->is_above == 1)
		rotate_both(src, dst, less_mov);
	else if (!(less_mov->is_above) && !(less_mov->closet_value->is_above))
		reverse_rotate_both(src, dst, less_mov);
	set_node_position(src, less_mov, 'a');
	set_node_position(dst, less_mov->closet_value, 'b');
	pb(src, dst);
}

/* Return the lenght of the stack givem */
int	stack_len(t_stack *stack)
{
	int	len;

	if (!stack)
		return (0);
	len = 0;
	while (stack)
	{
		stack = stack->next;
		len++;
	}
	return (len);
}

/* return a pointer to the las element in the stack given */
t_stack	*find_last_element(t_stack *stack)
{
	t_stack	*last;

	last = stack;
	if (!stack)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}

/* Return a pointer to the largest  number in the stack given */
t_stack	*find_largest(t_stack *stack)
{
	long	max;
	t_stack	*largest;

	if (!stack)
		return (NULL);
	max = LONG_MIN;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			largest = stack;
		}
		stack = stack->next;
	}
	return (largest);
}
