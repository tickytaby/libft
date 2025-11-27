/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:04:18 by ryin              #+#    #+#             */
/*   Updated: 2025/11/25 16:09:41 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			break;
		lst = lst->next;
	}
	return (lst);
}
// #include <stdlib.h>
// #include <stdio.h>
// int main(void)
// {
// 	t_list *head = ft_lstnew((void *)"Hello");
// 	t_list *two = ft_lstnew((void *)"People");
// 	t_list *three = ft_lstnew((void *)"World");
// 	t_list **container;
//
// 	ft_lstadd_front(&three, two);
// 	ft_lstadd_front(&two, head);
//
// 	container = malloc((ft_lstsize(head) + 1) * sizeof(t_list *));
// 	t_list *current = head;
// 	int i = 0;
// 	while (current)
// 	{
// 		container[i++] = current;
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}
// 	container[i] = 0;
// 	printf("\n");
// 	t_list *last = ft_lstlast(head);
// 	printf("Last node content: %s\n", (char *)last->content);
// 	i = 0;
// 	while (container[i])
// 		free(container[i++]);
// 	return (0);
// }
//
