/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:00:30 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/06 13:30:28 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dstc;
	unsigned char	*srcc;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	if (srcc < dstc)
	{
		while (len--)
			dstc[len] = srcc[len];
	}
	else
		ft_memcpy(dstc, srcc, len);
	return (dst);
}
/*
int	main(void)
{
	char	src[50] = "turani keske dovsem";

	char	*tmp;

	printf("%s\n", src);
	tmp = ft_memmove(src+2, src, 10);
	printf("%s\n", dst);
	return (0);
}
*/

/**
  * Kaynak hedeften küçükse, kaynağı hedefin sonuna kopyalayın.
  * kaynaktan hedefin başına. Aksi takdirde, kaynağı şuradan hedefe kopyalayın:
  * kaynağın başlangıcından hedefin başına
  *
  * dst Bu, içeriğin kopyalanacağı hedef dizinin işaretçisidir,
  * void* türünde bir işaretçiye tip dökümü yapılmıştır.
  * src Kaynak dize.
  * len Taşınacak bayt sayısı.
  *
  * @return Hedef dizeye bir işaretçi.
  */
