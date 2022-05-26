/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 21:53:30 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/23 10:56:30 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	strlen;

	if (s == NULL)
		return (NULL);
	strlen = ft_strlen((char *)s);
	if (start > strlen)
		return (ft_strdup(""));
	if (strlen - start >= len)
		sstr = (char *)malloc((len + 1) * sizeof(char));
	else
		sstr = (char *)malloc((strlen - start + 1) * sizeof(char));
	ft_strlcpy(sstr, (s + start), (len + 1));
	return (sstr);
}
/*
int main()
{
	char const a[30] = "not defteri";
	unsigned int b;
	size_t len;
	char *rem;

	len = 5;
	b = 2;

	rem = ft_substr(a, b, 5);
	printf("%s", rem);
}
*/
