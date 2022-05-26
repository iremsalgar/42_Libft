/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 23:03:19 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/10 23:03:28 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*ptr;

	size = ft_strlen((char *)s1);
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, size);
	ptr[size] = '\0';
	return (ptr);
}
/*size için s1 in uzunluğunu ölçtüm
 *ptr için size + 1 yaparak null u da dahil etti
 *çarpımı kadar yer açtım 
 *null ise null döner
 *ft_memcpy yi çağırarak istenilen  parametreyi 
 *istenilen boyutta belleğe koplayadım
 */
