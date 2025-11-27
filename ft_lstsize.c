/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:22:23 by ryin              #+#    #+#             */
/*   Updated: 2025/11/25 16:03:18 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// 
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
// 	printf("The list has %d elements\n", ft_lstsize(head));
// 	t_list *current = head;
// 	int i = 0;
// 	container = malloc((ft_lstsize(head) + 1) * sizeof(t_list *));
// 	while (current)
// 	{
// 		container[i++] = current;
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}
// 	container[i] = 0;
// 	printf("\n");
// 	i = 0;
// 	while (container[i])
// 		free(container[i++]);
// 	return (0);
// }
