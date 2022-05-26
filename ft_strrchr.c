/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:48:02 by isalgar           #+#    #+#             */
/*   Updated: 2022/02/01 00:04:52 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s) + 1;
	while (i--)
		if (s[i] == (char)c)
			return ((char *)(s + i));
	return (NULL);
}
/*
int main( void )
{
    char s[] = "asd"; // => Tekrar atanabilir string;
	char *s1 = "asd"; // => Tekrar atanamaz sadece okunulabilir string;
	char *s2;
	s2 = malloc(15);
	int i = 0;
	while (i < 15)
		s2[i] = 'a'; // => tekrar atanabilir string
    char c = 'x';
    char *ret;

    ret = ft_strrchr(s ,c);
    printf("%s", ret);
    return 0;
}
*/
