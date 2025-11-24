/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:04:36 by ryin              #+#    #+#             */
/*   Updated: 2025/11/24 15:59:27 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = (int)ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == c)
			return ((char *)&s[end]);
		end--;
	}
	return (0);
}
