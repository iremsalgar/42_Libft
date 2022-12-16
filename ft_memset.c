/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:43:34 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/04 16:43:39 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}

/**
  * Ft_memset(), bir bellek alanına, bir bayt değerine ve bir size_t uzunluğuna işaretçi alır ve
  * bayt değeri ile hafıza alanı
  *
  * s Bu, doldurulacak bellek bloğunun işaretçisidir.
  * c hafızayı dolduracak karakter
  * n c değerine ayarlanacak bayt sayısı
  *
  * @return Bellek alanına bir işaretçi s.
  */
