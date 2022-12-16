/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:38:54 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/10 12:38:59 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 && *s2) != '\0' && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
  * İşlev, s1 ve s2 dizilerinin ilk n karakterini karşılaştırır
  *
  * s1 Bu, karşılaştırılacak ilk dizidir.
  * s2 Karşılaştırılacak dize.
  * n Karşılaştırılacak maksimum karakter sayısı.
  *
  * @return Karşılaştırılan dizelerde farklılık gösteren ilk iki karakter arasındaki fark.
  */