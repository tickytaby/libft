/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:46:58 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 16:02:18 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char *)s1;
	two = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*one != *two)
			return (*one - *two);
		one++;
		two++;
	}
	return (0);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char sCpy[] = {-128, 0, 127, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	if (ft_memcmp(s, sCpy, 4) == memcmp(s, sCpy, 4))
// 		printf("Correct\n");
// 	else
// 		printf("Wrong\n");
// 	if (ft_memcmp(s2, s, 1) == memcmp(s2, s, 1))
// 		printf("Correct\n");
// 	else
// 		printf("Wrong\n");
// 	return 0;
// }
