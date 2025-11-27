/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryin <ryin@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 18:11:24 by ryin              #+#    #+#             */
/*   Updated: 2025/11/25 20:31:02 by ryin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	printf("DELONE: ADDRESS OF LST IS %p\n", lst);
	(*del)(lst->content);	
	free(lst);
}
