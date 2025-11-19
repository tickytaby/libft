/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:59:43 by ryin              #+#    #+#             */
/*   Updated: 2025/11/19 13:46:29 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	equal(const char *big, const char *little)
{
	while (*little)
	{
		if (*big != *little)
			return (0);
		big++;
		little++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (!(ft_strlen(little)))
		return ((char *)big);
	i = 0;
	while (i < len)
	{
		if (big[i] == *little && equal(&big[i], little))
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
