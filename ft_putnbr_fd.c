/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 19:03:44 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/22 12:18:22 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	justput(int fd, long num, int flag)
{
	char	result[2];

	if (flag)
		write(fd, "-", 1);
	flag = 0;
	result[0] = '0' + num % 10;
	num = num / 10;
	if (0 < num)
		justput(fd, num, flag);
	write(fd, result, 1);
}

static void	ft_putint(int n, int fd)
{
	long	num;
	int		flag;

	flag = 0;
	num = n;
	if (num < 0)
	{
		flag = 1;
		num *= -1;
	}
	justput(fd, num, flag);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putint(n, fd);
}
