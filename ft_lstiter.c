/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 11:41:36 by ryin              #+#    #+#             */
/*   Updated: 2025/11/27 11:58:39 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
// #include <stdio.h>
// #include <stdlib.h>
// void plusOne(void *content)
// {
// 	int *con = (int *)content;
// 	*con += 1;
// }
// 
// void delete(void *ptr)
// {
// 	int *pt = (int *)ptr;
// 	*pt = 0;
// }
// 
// int main(void)
// {
// 	int uno = 1;
// 	int due = 2;
// 	int tre = 3;
// 	int quattro = 4;
// 	t_list *one = ft_lstnew((int *)&uno);
// 	t_list *two = ft_lstnew((int *)&due);
// 	t_list *three = ft_lstnew((int *)&tre);
// 	t_list *four = ft_lstnew((int *)&quattro);
// 
// 	ft_lstadd_back(&one, two);
// 	ft_lstadd_back(&two, three);
// 	ft_lstadd_back(&three, four);
// 
// 	ft_lstiter(one, &plusOne);
// 
// 	t_list *current = one;
// 	int i = 1;
// 	while (current)
// 	{
// 		printf("Node %d: %d\n", i, *(int *)(current->content));
// 		i++;
// 		current = current->next;
// 	}
// 	ft_lstclear(&one, &delete);
// 	return 0;
// }
