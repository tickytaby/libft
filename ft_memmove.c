/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 10:20:33 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 15:35:33 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*s;

	s = (unsigned char *)src;
	ptr = (unsigned char *)dest;
	while (n)
	{
		if (dest > src)
			ptr[n - 1] = s[n - 1];
		else
			*ptr++ = *s++;
		n--;
	}
	return (dest);
}
