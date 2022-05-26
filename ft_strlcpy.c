/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:02:31 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/27 11:18:41 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (dstsize)
	{
		while (*src && --dstsize)
			*dst++ = *src++;
		*dst = 0;
	}
	return (i);
}
/*
int main(void)
{
	char src[50] = "cagla";

	char dst[50];
	size_t tmp;

	tmp = ft_strlcpy(dst, src, 10);
	printf("%s\n", dst);
	return(0);
}
*/
