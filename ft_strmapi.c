/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:49:12 by ryin              #+#    #+#             */
/*   Updated: 2025/11/24 13:03:27 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

size_t	ft_strlen(char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		i;

	out = malloc(ft_strlen((char *)s) + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (*s)
	{
		out[i] = f(i, *s);
		i++;
		s++;
	}
	return (out[i] = 0, out);
}
// #include <stdio.h>
// char	offset(unsigned int i, char n)
// {
// 	i = 1;
// 	return (n + i);
// }
// 
// int	main(void)
// {
// 	char	(*funcPtr)(unsigned int, char);
// 	char	*old;
// 	char	*new;
// 
// 	funcPtr = &offset;
// 	old = "abcd";
// 	new = ft_strmapi(old, funcPtr);
// 	printf("Old: %s\nNew: %s\n", old, new);
// 	return (0);
// }
