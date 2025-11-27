/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:04:36 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 16:11:07 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = (int)ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == (unsigned char)c)
			return ((char *)&s[end]);
		end--;
	}
	return (0);
}
