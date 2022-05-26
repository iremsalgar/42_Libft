/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:23:57 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/22 07:09:46 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i] != '\0')
		(*f)(i, &s[i]);
}
/*map için:
 * striteri ile tek farkı mapte 
 * kendini yeni bir dizinin içine atar
*/
/*deneme çalıştıramadım
int main()
{
	char	a[] = "selam";
	printf("%s", ft_striteri(a));	
}
*/
