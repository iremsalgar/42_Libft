/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 01:54:00 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/28 19:31:10 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = list;
	while (list_ptr != NULL)
	{
		(*f)(list_ptr->content);
		list_ptr = list_ptr->next;
	}
}
/*
 * işaretçi liste oluşturup diğer listelere de 
 * giderek onlara da f fonksiyonunu uyglamasını sağlar
*/
/*
void iter(void *a)
{
	printf("%s\n",a);
}

int main()
{
	t_list *a;
	t_list *b;
	a=ft_lstnew("sjbruh");
	b=ft_lstnew("norvecbro");
	
	a->next = b;
	ft_lstiter(a,iter);
}
*/
