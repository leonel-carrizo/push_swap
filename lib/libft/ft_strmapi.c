/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <lcarrizo@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:35:42 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/05 05:34:12 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

static char	*new_str(int len)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	str = new_str(str_len(s));
	if (!str)
		return (NULL);
	i = 0;
	while (*(s + i))
	{
		*(str + i) = f(i, s[i]);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}

//static char	ft_upper(unsigned int i, char c)
//{
//	if ((c >= 'a' && c <= 'z') && i > 0)
//		return (c - 32);
//	else
//		return (c);
//}
//
//int	main()
//{
//	const char	*str;
//
//
//	str = "Hola, Mundo!";
//	str = ft_strmapi(str, ft_upper);
//	printf("main: __%s__\n", str);
//	return (0);
//}
