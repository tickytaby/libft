/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 11:50:37 by ryin              #+#    #+#             */
/*   Updated: 2025/11/24 12:25:33 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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

char	*ft_itoa(int n) {
	int	nbr;	
	char	*out;
	int	size;
	int	tmp;
	int	i;

	nbr = n;
	size = 1;
	while ((n /= 10) != 0)
		size++;
	out = malloc(size + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (size--) {
		tmp = nbr / (power_ten(size));
		out[i++] = tmp + 48;
		nbr -= tmp * power_ten(size);
	}
	return (out[i] = 0, out);
}

int main(void)
{
	printf("%d to %s\n", INT_MAX, ft_itoa(INT_MAX));
	printf("%d to %s\n", 1, ft_itoa(1));
	printf("%d to %s\n", -10, ft_itoa(-10));
	
	return (0);
}
