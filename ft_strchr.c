/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:32:20 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 16:08:20 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char s[] = "tripouille";
// 	if (ft_strchr(s, 0) == strchr(s, 0))
// 		printf("Correct\n");
// 	else
// 		printf("Wrong\n");
// 	if (ft_strchr(s, 't' + 256) == strchr(s, 't' + 256))
// 		printf("Correct\n");
// 	else
// 		printf("Wrong\n");
// 	char *my = ft_strchr(s, 't' + 256);
// 	char *act = strchr(s, 't' + 256);
// 	printf("MINE: %s\nACTUAL: %s\n", my, act);
// }
