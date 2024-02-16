/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:41:04 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/11/27 19:09:31 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//int	main(void)
//{
//	int	size = 12;
//	char	str[size];
//	
//	ft_memset(str, '4' , sizeof(char)* size);
//	while (size--)
//		ft_putchar_fd(str[size], STDIN_FILENO);
//	return (0);
//}

//inlcude in <unistd.h> are the constants:
//STDIN_FILENO = 0; to standar input (keyboard)
//STDOUT_FILENO = 1; to standar output (screen)
//STDERR_FILENO = 2; to error messages
