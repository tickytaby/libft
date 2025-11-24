/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:14:55 by ryin              #+#    #+#             */
/*   Updated: 2025/11/24 17:45:18 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static int	word_len(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**free_all(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
	return (NULL);
}

static int	fill_tab(char **tab, char const *s, char c, int words)
{
	int	i;
	int	len;

	i = 0;
	while (i < words)
	{
		while (*s && *s == c)
			s++;
		len = word_len(s, c);
		tab[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (!tab[i])
		{
			free_all(tab, i - 1);
			return (0);
		}
		ft_strlcpy(tab[i], s, len + 1);
		s += len;
		i++;
	}
	tab[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	if (!fill_tab(tab, s, c, words))
		return (NULL);
	return (tab);
}
