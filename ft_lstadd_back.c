/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 06:42:01 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/28 18:25:07 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = ft_lstlast(*lst);
		temp->next = new;
	}
}

/**
  * Listenin sonuna 'yeni' öğesini ekler
  *
  * lst Bir listenin ilk bağlantısına işaretçi.
  * yeni Listeye eklenecek yeni öğe.
  *
  * @return Listedeki son elemanın adresi.
  */

/*
int main()
{
	t_list **temp;
	t_list *lst1;
	t_list *lst2;

	temp = malloc(sizeof(t_list *));
	lst1 = ft_lstnew("asd");
	lst2 = ft_lstnew("sds");

	ft_lstadd_back(temp, lst1);
	ft_lstadd_back(temp, lst2);
	printf("%s\n%s", (*temp)->content, (*temp)->next->content);
}
*/
