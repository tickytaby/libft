/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 14:05:21 by ryin              #+#    #+#             */
/*   Updated: 2025/12/02 07:32:56 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*out;

	out = (char *)malloc(ft_strlen(s) + 1);
	if (!out)
		return (0);
	ft_strlcpy(out, (char *)s, ft_strlen(s) + 1);
	return (out);
}
