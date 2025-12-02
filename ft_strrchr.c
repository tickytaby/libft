/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:04:36 by ryin              #+#    #+#             */
/*   Updated: 2025/12/02 07:13:10 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (1)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (0);
}
