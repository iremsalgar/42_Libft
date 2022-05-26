/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:22:40 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/23 23:00:01 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
/*
 * burada b zero içine yönlendirdim
 * ancak bzero da memset kullandım
 * memsette sabit bir bayt ile bellek dolabiliyor
 * b zero da istediğim işlemi yaptığı için burada
 * bellekteki yer kadarda döndürdüm 
*/
/*
int	main()
{
	char *dst;
	char *dst2;

	dst = (char *)calloc(30, 1);
	printf("dst: %s\n", dst);
	dst2 = (char *)ft_calloc(30, 1);
	printf("dst2: %s\n", dst2);
	printf("===================\n");
}
*/
/*
 * boş vermesi gerekiyor çünkü 
 * calloc null karakter verir null karakterde çıktı olarak alınamaz
*/
