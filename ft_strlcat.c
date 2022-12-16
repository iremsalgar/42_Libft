/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:20:22 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/07 08:24:24 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *hedef, const char *kaynak, size_t boyut)
{
	size_t	index_kaynak;
	size_t	len_hedef;
	size_t	len_kaynak;

	len_hedef = ft_strlen(hedef);
	len_kaynak = ft_strlen((char *)kaynak);
	if (boyut < len_hedef)
		return (boyut + len_kaynak);
	index_kaynak = 0;
	while (kaynak[index_kaynak] != '\0' && boyut > (len_hedef + 1))
	{
		hedef[len_hedef] = kaynak[index_kaynak];
		index_kaynak++;
		len_hedef++;
	}
	hedef[len_hedef] = '\0';
	return (len_hedef + ft_strlen((char *)(&kaynak[index_kaynak])));
}

/**
  * Kaynak ile gösterilen stringi hedef ile gösterilen stringin sonuna kopyalar ama
  * hedefin sonundaki sonlandırıcı boş baytın üzerine yazmaz ve hedefin toplam uzunluğunu döndürür
  * oluşturmaya çalıştığı dize
  *
  * hedef Kopyalanacak dize.
  * kaynak Eklenecek dize.
  *boyut Hedef tamponun boyutu.
  *
  * @return Yaratmaya çalıştığı dizgenin uzunluğu.
  */

/*
int	main(void)
{
	char const	kaynak[50] = "tansiyon hastası oldum";
	char		hedef[50];
	size_t		*tmp;

	printf("%s\n", kaynak);
	tmp = ft_(kaynak, hedef, 40);
	printf("%s\n", tmp);
	return (tmp);
}
*/
