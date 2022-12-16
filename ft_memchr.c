/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:53:45 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/08 16:54:07 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*rem;

	rem = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (rem[i] == (unsigned char)c)
			return (&rem[i]);
		i++;
	}
	return (NULL);
}

/**
  * ft_memchr() işlevi, dizgede c'nin (işaretsiz bir karaktere dönüştürülmüş) ilk geçtiği yeri bulur
  * s
  *
  * s Aranacak hafıza alanı.
  * c Aranacak karakter.
  * n Aranacak bayt sayısı.
  *
  * @return s dizisindeki c karakterinin ilk geçtiği yerin adresi.
  */
