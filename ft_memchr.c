/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:51:20 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 16:08:43 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char s[] = {0, 1, 2, 3, 4, 5};
// 	printf("256 + 2 in char is: %c\n", 256 + 2);
// 	char *out = (char *)ft_memchr(s, 256 + 2, 3);
// 	char *act = (char *)memchr(s, 256 + 2, 3);
// 	if (*out == *act)
// 		printf("True\n");
// 	else
// 		printf("False\n");
// 
// 	return 0;
// }
