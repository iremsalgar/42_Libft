/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:16:54 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/22 07:25:20 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	ft_digitnum(int n)
{
	int		count;

	count = !n;
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		sign;

	sign = n < 0;
	len = ft_digitnum(n) + sign;
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (sign)
	{
		result[0] = '-';
		result[--len] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (len-- - sign)
	{
		result[len] = (n % 10) + 48;
		n /= 10;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	int a= -123;
	printf("%s\n", ft_itoa(a));
}
*/
/*
 * digitnum ile sayının kaç basamaklı olduğunu öğren
 * uzunluğuna işareti de ekle
 * yer ayırırken null u da ekle
 * uzunluk bilindiği için sona null ekler
 * 0. indise - atar negatifse
 *uzunluğu sondan azaltarak sayıları yaz işarete dokunmaz böylelikle
 *işaret yoksa len i azaltarak sondan yaz işaret ekleme
 *sonucu döndür
*/
