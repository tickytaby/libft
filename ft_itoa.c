/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:50:37 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 18:53:34 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	power_ten(int n)
{
	int	out;

	out = 10;
	if (n == 0)
		return (1);
	if (n == 1)
		return (out);
	while (--n)
		out *= 10;
	return (out);
}

int	get_size(int n)
{
	int	size;	

	if (n < 0)
		size = 2;
	else
		size = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*alloc(int size)
{
	char	*out;

	out = malloc(size + 1);
	if (!out)
		return (NULL);
	return (out);
}

char	*ft_itoa(int n)
{
	long	nbr;	
	char	*out;
	int		size;
	int		tmp;
	int		i;

	nbr = (long)n;
	size = get_size(n);
	out = alloc(size);
	if (!out)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		out[i++] = '-';
		nbr *= -1;
		size--;
	}
	while (size--)
	{
		tmp = nbr / (power_ten(size));
		out[i++] = tmp + 48;
		nbr -= tmp * power_ten(size);
	}
	return (out[i] = 0, out);
}
