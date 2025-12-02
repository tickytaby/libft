/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:15:30 by ryin              #+#    #+#             */
/*   Updated: 2025/12/02 07:43:47 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

int	in_set(char s, char const *set)
{
	while (*set)
	{
		if (*set == s)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	if (ft_strlen(s1) == 0)
	{
		out = malloc(1);
		return (*out = 0, out);
	}
	end = ft_strlen(s1) - 1;
	while (in_set(s1[end], set) && end)
		end--;
	while (in_set(s1[start], set) && start <= end)
		start++;
	out = malloc(end - start + 2);
	if (!out)
		return (NULL);
	i = 0;
	while (start <= end)
		out[i++] = s1[start++];
	return (out[i] = 0, out);
}
// #include <stdio.h>
// int main(void)
// {
// 	const char *mystr = "";
// 	char *trimmed = ft_strtrim(mystr, " x");
// 	printf("OG: %s\nTrimmed: %s\n", mystr, trimmed);
// 	const char *mystri = "zxy_";
// 	char *trimd = ft_strtrim(mystri, "zxy_");
// 	if (!trimd)
// 		printf("Allocation failed (EXPECTED)\n");
// 	else
// 		printf("OG: %s\nTrimmed: %s\n", mystri, trimd);
// 	free(trimmed);
// 	free(trimd);
// 
// 	return (0);
// }
