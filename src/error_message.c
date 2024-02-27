/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_message.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 21:33:53 by lcarrizo          #+#    #+#             */
/*   Updated: 2024/02/27 20:08:30 by lcarrizo          ###   ##london.com     */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	error_message(const char *message)
{
	int	len;

	len = ft_strlen(message);
	write(2, message, len);
	write(2, "\n", 1);
}
