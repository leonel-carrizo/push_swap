/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 23:25:57 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/02 05:35:34 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	nb;
	char		c[10];
	int			i;

	if (n > INT_MAX || n < INT_MIN)
		return ;
	nb = n;
	if (nb == 0)
		write(fd, "0", 1);
	if (nb < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	i = 0;
	while (nb)
	{
		c[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i > 0)
		write (fd, &c[--i], 1);
}

//int	main(void)
//{
//	ft_putnbr_fd(INT_MIN, STDOUT_FILENO);
//	ft_putnbr_fd(-0, STDOUT_FILENO);
//	ft_putnbr_fd(INT_MAX, STDOUT_FILENO);
//	ft_putnbr_fd(0, STDIN_FILENO);
//	putnbr()
//	return (0);
//}
