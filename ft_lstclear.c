/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 00:32:21 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/31 20:03:06 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		(*del)(temp->content);
		free(temp);
	}
}
/*
void del(void *del)
{
	free(del);
}

int main()
{
	t_list *a;
	t_list *b;

	a = ft_lstnew("data");
	b = ft_lstnew("data2");

	a->next = b;

	ft_lstclear(&a, del);
}
*/
