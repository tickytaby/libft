/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:59:43 by ryin              #+#    #+#             */
/*   Updated: 2025/11/28 17:03:33 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

static int	equal(const char *big, const char *little, size_t i, size_t len)
{
	if (ft_strlen(little) > (len - i))
		return (0);
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
	while (i < len && i < ft_strlen(big))
	{
		if (big[i] == *little && equal(&big[i], little, i, len))
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	char hay[30] = "aaabcdabcdn";
// 	printf("EXP: 1, ACT: %s\n", ft_strnstr(hay, "cdn", 30));
// 	return 0;
// }
