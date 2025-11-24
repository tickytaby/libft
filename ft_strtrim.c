/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 17:15:30 by ryin              #+#    #+#             */
/*   Updated: 2025/11/24 18:00:20 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

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

int	f_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*out;
	int		start;
	int		end;
	int		i;

	start = 0;
	end = f_strlen(s1);
	while (in_set(s1[start], set) && start < end)
		start++;
	if (start == --end)
		return (NULL);
	while (in_set(s1[end], set) && end)
		end--;
	if (end < start)
		return (NULL);
	out = malloc(end - start + 2);
	if (!out)
		return (NULL);
	i = 0;
	while (start <= end)
		out[i++] = s1[start++];
	return (out[i] = 0, out);
}
// int main(void)
// {
// 	const char *mystr = "zxy_hello worldz";
// 	char *trimmed = ft_strtrim(mystr, "zxy_");
// 	printf("OG: %s\nTrimmed: %s\n", mystr, trimmed);
// 	const char *mystri = "zxy_";
// 	char *trimd = ft_strtrim(mystri, "zxy_");
// 	if (!trimd)
// 		printf("Allocation failed (EXPECTED)\n");
// 	else
// 		printf("OG: %s\nTrimmed: %s\n", mystri, trimd);
// 	return (0);
// }
