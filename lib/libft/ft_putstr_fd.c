/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:11:53 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/05 03:03:17 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
			write(fd, s++, 1);
	}
}

//int	main(void)
//{
//	char	*str;
//
//	str = "Hola, Mundo!";
//	ft_putstr_fd(str, STDOUT_FILENO);
//	return (0);
//}
