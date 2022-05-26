/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isalgar <isalgar@42istanbul.com.tr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:25:07 by isalgar           #+#    #+#             */
/*   Updated: 2022/01/23 23:35:46 by isalgar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
	char a = 'a';
	int fd;
	
	fd = 1;
	ft_putchar_fd(a,fd);
}
*/
/*
 * putchsr direkt yazdırma işini yaptığı için mainde kullanıldı
 * fd olayı
 * 0 = girdi
 * 1 = çıktı
 * 2 = hata
 * 3 = fd
 * write da 1 i ortadan kaldırıp yerine fd yi vererek 
 * çıktıyı direk fd içine atıyoruz
*/
