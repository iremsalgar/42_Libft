/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 06:26:02 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/28 15:03:09 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new -> next = *lst;
	*lst = new;
}

/**
  * Listenin başına yeni bir öğe ekler.
  *
  * lst Bağlantılı bir listeye işaretçiye işaretçi.
  * listeye eklenecek yeni öğe
  */

/*
int main()
{
	t_list **temp;
	t_list *lst1;
	t_list *lst2;

	temp = malloc(sizeof(t_list *));
	lst1 = ft_lstnew("apqpqp");
	lst2 = ft_lstnew("jsjsjsjs");

	ft_lstadd_front(temp, lst1);
	ft_lstadd_front(temp, lst2);
	printf("%s\n%s", (*temp)->content, (*temp)->next->content);
}
*/
