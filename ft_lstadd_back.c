/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:11:00 by ryin              #+#    #+#             */
/*   Updated: 2025/11/25 16:22:06 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = ft_lstlast(*lst);
	last->next = new;
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *one = ft_lstnew((void *)"Hello");
// 	t_list *two = ft_lstnew((void *)"People");
// 	t_list *three = ft_lstnew((void *)"Of");
// 	t_list *four = ft_lstnew((void *)"The");
// 	t_list *five = ft_lstnew((void *)"World");
// 
// 	ft_lstadd_back(&one, two);
// 	ft_lstadd_back(&one, three);
// 	ft_lstadd_back(&one, four);
// 	ft_lstadd_back(&one, five);
// 
// 	t_list *current = one;
// 	while (current)
// 	{
// 		printf("%s ", (char *)current->content);
// 		current = current->next;
// 	}
// 	printf("\n");
// 	return (0);
// }
