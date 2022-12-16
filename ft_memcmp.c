/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:17:20 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/10 12:19:51 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = (size_t)0;
	if (n == (size_t)0)
		return (0);
	while (i < n && (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]))
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

/**
  * ft_memcmp() işlevi, s1 bellek alanının ilk n baytını, bellek alanının ilk n baytıyla karşılaştırır.
  * hafıza alanı s2
  *
  * s1 Karşılaştırılacak ilk dizi.
  * s2 Karşılaştırılacak dize.
  * n Karşılaştırılacak bayt sayısı.
  *
  * @return s1 ve s2 dizilerinde farklılık gösteren ilk iki bayt arasındaki fark.
  */