/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:56:11 by andrferr          #+#    #+#             */
/*   Updated: 2022/11/09 11:16:02 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	char	*b;

	if (!s1 || !s2)
		return (0);
	a = (char *)malloc(sizeof(char)
			* (ft_strlen((char *)s1) + ft_strlen((char *)s2)) + 1);
	if (!a)
		return (NULL);
	b = a;
	while (*s1)
		*a++ = *s1++;
	while (*s2)
		*a++ = *s2++;
	*a = '\0';
	return (b);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

void	*allocate_at_zero(size_t n, size_t size)
{
	char	*ptr;
	size_t	i;

	if (!n || !size)
		return (NULL);
	ptr = (void *)malloc(n * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
