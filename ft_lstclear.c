/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:22:02 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 11:41:26 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nx;
	t_list	*current;

	current = *lst;
	while (current)
	{
		nx = current->next;
		ft_lstdelone(current, del);
		current = nx;
	}
	*lst = 0;
}
// #include <stdio.h>
// void	delete(void *ptr)
// {
// 	free(ptr);
// }
// 
// int main(void)
// {
// 	char *uno = malloc(2);
// 	char *due = malloc(2);
// 	char *tre = malloc(2);
// 	char *quattro = malloc(2);
// 	char *cinque = malloc(2);
// 	char *sei = malloc(2);
// 	uno[0] = 'H';
// 	uno[1] = 0;
// 	due[0] = 'e';
// 	due[1] = 0;
// 	tre[0] = 'l';
// 	tre[1] = 0;
// 	quattro[0] = 'l';
// 	quattro[1] = 0;
// 	cinque[0] = 'o';
// 	cinque[1] = 0;
// 	sei[0] = 'W';
// 	sei[1] = 0;
// 	t_list  *one = ft_lstnew((void *)uno);
// 	t_list  *two = ft_lstnew((void *)due);
// 
// 	t_list  *three = ft_lstnew((void *)tre);
// 	t_list  *four = ft_lstnew((void *)quattro);
// 	t_list  *five = ft_lstnew((void *)cinque);
// 	t_list  *six = ft_lstnew((void *)sei);
// 
// 	
// 	ft_lstadd_back(&one, two);
// 	ft_lstadd_back(&two, three);
// 	ft_lstadd_back(&three, four);
// 	ft_lstadd_back(&four, five);
// 	ft_lstadd_back(&five, six);
// 
// 	t_list *cur = one;
// 	t_list *current = one;
// 	while (current)
// 	{
// 		if (current->next == four)
// 		{
// 			ft_lstclear(&(current->next), &delete);
// 			current->next = 0;
// 			break;
// 		}
// 		current = current->next;
// 	}
// 	int i = 1;
// 	while (cur)
// 	{
// 		printf("THE ADDRESS OF %d is %p\n", i, cur);
// 		printf("THE ADDRESS OF NEXT IS %p\n", cur->next);
// 		printf("%s\n", (char *)cur->content);
// 		cur = cur->next;
// 		i++;
// 	}
// 	printf("Finished loop\n");
// 	free(uno);
// 	free(one);
// 	free(two);
// 	free(due);
// 	free(three);
// 	free(tre);
// 	return 0;
// }
