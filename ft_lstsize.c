/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 17:51:22 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/28 18:33:15 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*temp;
	int		count;

	temp = lst;
	count = 0;
	while (temp != NULL)
	{
		count++;
		temp = temp -> next;
	}
	return (count);
}
/*
int main()
{
	t_list *a;
	t_list *b;
	
	a = ft_lstnew("selam");
	b = ft_lstnew("naber");

	a->next = b;

	printf("%d", ft_lstsize(a));
}
*/
