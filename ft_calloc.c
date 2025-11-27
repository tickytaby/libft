/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:53:11 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 17:52:37 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static void	*set(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	val;

	ptr = (unsigned char *)s;
	val = (unsigned char)c;
	while (n--)
		*ptr++ = val;
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (nmemb * size == 0)
	{
		res = malloc(nmemb * size);
		return (set(res, 0, 0));
	}
	if ((int)nmemb < 0 || (int)size < 0 || (int)(nmemb * size) < 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	return (set(res, 0, nmemb * size));
}
