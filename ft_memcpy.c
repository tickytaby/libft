/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:13:43 by ryin              #+#    #+#             */
/*   Updated: 2025/11/24 15:58:38 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*out;
	unsigned char	*s;

	out = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*out++ = *s++;
	return (dest);
}
