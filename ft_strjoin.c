/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:44:31 by ryin              #+#    #+#             */
/*   Updated: 2025/12/02 07:33:49 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	size_t	i;
	size_t	tot;

	tot = ft_strlen(s1) + ft_strlen(s2);
	out = (char *)malloc(tot + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (*s1)
		out[i++] = *s1++;
	while (*s2)
		out[i++] = *s2++;
	out[i] = 0;
	return (out);
}
