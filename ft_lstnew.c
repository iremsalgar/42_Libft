/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 07:17:16 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/31 19:53:07 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elem;

	elem = malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}
/*
int main()
{
	t_list *a;
	t_list *b;

	a = malloc(sizeof(t_list));
	a->content = "selam";
	b = malloc(sizeof(t_list));
	b->content = "naber";
	a->next = b;

	printf("%s", a->next->content);
}
*/
