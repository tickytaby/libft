/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:44:31 by ryin              #+#    #+#             */
/*   Updated: 2025/11/19 15:02:15 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

int	l(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int	i;
	int	tot;

	tot = l(s1) + l(s2);
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
