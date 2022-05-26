/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:33:56 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/19 18:25:35 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_negative(int negative)
{
	if (negative != 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

int	ft_atoi(const char *str)
{
	long int	num;
	int			negative;

	num = 0;
	negative = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		num = num * 10 + *str - 48;
		if (num * is_negative(negative) > 2147483647)
			return (-1);
		if (num * is_negative(negative) < -2147483648)
			return (0);
		str++;
	}
	return ((int)(num * is_negative(negative)));
}
/*
int	main()
{
	char	src[50] = "-133354";
	printf("%s\n", src);
	return(0);
}
*/
