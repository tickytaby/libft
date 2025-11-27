/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:35:50 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 18:23:35 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

static size_t	min(size_t uno, size_t due)
{
	if (uno > due)
		return (due);
	return (uno);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;
	size_t	blen;
	size_t	mem;

	blen = ft_strlen(s);
	if (start >= blen)
		mem = 1;
	else
		mem = min(blen - start, len) + 1;
	out = (char *)malloc(mem);
	if (!out)
		return (NULL);
	i = 0;
	while (i < min(blen, len) && start < blen)
		out[i++] = s[start++];
	out[i] = 0;
	return (out);
}
