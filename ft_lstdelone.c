/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 23:55:14 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/18 23:58:49 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*temp;

	temp = lst;
	if (lst == NULL)
		return ;
	lst = lst->next;
	(*del)(temp->content);
	free(temp);
}
/*
 * free ile tahsis edilen belleği boşa çıkarır.
 * PARAMETRELER
 * #1. Serbest bırakılacak öğe.
 * #2. İçeriği silmek için kullanılan işlevin adresi.
*/
