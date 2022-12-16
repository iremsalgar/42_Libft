/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:10:25 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/23 06:10:29 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[j]) && j != 0)
		j--;
	if ((int)(j - i + 1) <= 0)
		return (ft_calloc(1, 1));
	return (ft_substr(s1, i, (j - i + 1)));
}

/**
  * Kümede belirtilen karakterler olmadan argüman olarak verilen dizgenin bir kopyasını döndürür
  * argüman
  *
  * s1 Kesilecek dize.
  * kırpılacak karakter kümesini ayarlayın
  *
  * @return Yeni bir dizeye işaretçi.
  */

/*
int	main()
{
	char	s1[] = "aAa21345aAa";
	char	set[] = "aAa";
	printf("%s",ft_strtrim(arr,set));
}
*/
