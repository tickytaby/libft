/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 11:36:39 by ryin              #+#    #+#             */
/*   Updated: 2025/12/02 08:34:55 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	tried;

	i = 0;
	tried = ft_strlen(src);
	if (size == 0)
		return (tried);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (tried);
}
// #include <string.h>
// #include <stdio.h>
// #include <bsd/bsd.h>
// int main(void)
// {
// 	char dest[100];
// 	char *src = "hello world";
// 	char dest1[100];
// 	int out = ft_strlcpy(dest, src, 0);
// 	int act = strlcpy(dest1, src, 0);
// 	
// 	printf("ft_strlcpy tried to create: %d bytes -> %s\n", out, dest);
// 	printf("strlcpy tried to create: %d bytes -> %s\n", act, dest1);
// 	if (out == act)
// 		printf("Correct\n");
// 	else
// 		printf("Wrong\n");
// }
