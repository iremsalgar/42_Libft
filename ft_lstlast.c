/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 06:30:46 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/28 19:06:26 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	while (temp -> next != NULL)
			temp = temp -> next;
	return (temp);
}
/*
int main()
{
	t_list *a;
	t_list *b;
	char *asd;

	a = ft_lstnew("limon");
	b = ft_lstnew("çilek");

	asd = malloc(sizeof(t_list *));
	asd = ft_lstlast(a)->content;
	printf("%s", asd);
}
*/
