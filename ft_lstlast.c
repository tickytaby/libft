/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:04:18 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 19:03:50 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			break ;
		lst = lst->next;
	}
	return (lst);
}
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	t_list *l = NULL;
// 	printf("%p\n", ft_lstlast(l));
// 	printf("%d\n", ft_lstlast(l) == 0);
// 	ft_lstadd_back(&l, ft_lstnew((void *)1));
// 	printf("%d\n", (ft_lstlast(l))->content == (void *)1);
// 	return (0);
// }
