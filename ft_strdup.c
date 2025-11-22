/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:05:21 by ryin              #+#    #+#             */
/*   Updated: 2025/11/19 14:17:07 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

size_t	len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	make_copy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*out;

	out = (char *)malloc(len(s) + 1);
	if (!out)
		return (0);
	make_copy(out, (char *)s, len(s) + 1);
	return (out);
}
