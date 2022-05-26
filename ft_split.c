/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 05:57:22 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/28 23:07:33 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	kelimesayaci(const char *s, char c)
{
	int	kelime;

	kelime = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			return (kelime);
		while (*s != c && *s)
			s++;
		kelime++;
	}	
	return (kelime);
}

static int	charsayaci(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**kelimegrubu;
	int		kelime;

	if (!s)
		return (0);
	kelime = 0;
	kelimegrubu = malloc(sizeof(char *) * kelimesayaci(s, c) + 1);
	if (!kelimegrubu)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		kelimegrubu[kelime] = ft_substr(s, 0, charsayaci(s, c));
		kelime++;
		s = s + charsayaci(s, c);
	}
	kelimegrubu[kelime] = NULL;
	return (kelimegrubu);
}
/*
int     main(void)
{
	char	s1[] = "keşke bakan olsam";
	char	**words;
	int		i = 0;
	words = ft_split(s1, ' ');
	while (*(words + i) != NULL)
	{
		printf("%s", *(words + i));	
		i++;
	}
	return (0);
}
*/
