/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:53:11 by ryin              #+#    #+#             */
/*   Updated: 2025/12/02 08:36:04 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	max;

	max = ~(size_t)0;
	if (size != 0 && nmemb > max / size)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	return (ft_memset(res, 0, nmemb * size));
}
