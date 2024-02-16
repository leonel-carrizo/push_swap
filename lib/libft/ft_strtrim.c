/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:19:34 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/12/02 02:06:02 by lcarrizo         ###   ###.london.com    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	chrcmp(const char *set, const char c)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && chrcmp(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && chrcmp(set, s1[end - 1]))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (start + i < end)
	{
		ptr[i] = s1[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

//int	main(void)
//{
//	const char	*s1;
//	const char	*set;
//	char		*trimmed;
//
//	s1 = "      Hola++++   ";
//	set = " +H";
//	trimmed = ft_strtrim(s1, set);
//	printf("The trimmed: %s\n", trimmed);
//	free(trimmed);
//	return (0);
//}

//check si s1 o set son NULL -> return NULL
//check si al comienzo de `s1` algun char match con algun char en `set`
//cada vez que match aumentar una variable que indicara el principio 
//de la subcadena trimmed
//si no match es el principio de la subcadena.
//check desde el final de `s1` si algun char match con alguno de `set
//si es asi ir reduciendo un variable hast con seguir el diferente
//este indicara el final de la subcadena strimmed.
//crear la nueva cadena con malloc usando el largo de la subcadena encontrada
//verificar si hay espacio para alojar la nueva cadena, sino devolver NULL
//retornar el puntero a la nueva cadena.
