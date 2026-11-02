/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main_bzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:19:19 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/16 20:21:31 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	n;
	int		a[] = {1, 2, 3, -1};
	int		b[] = {1, 2, 3, -1};
	int		c[] = {1, 2, 3, -1};
	int		i;

	i = 0;
	n = 1;
	(void)argc;
	(void)argv;
	while (a[i] != -1)
	{
		printf("a = %d\n", a[i]);
		i++;
	}
	i = 0;
	ft_bzero(b, n);
	while (b[i] != -1)
	{
		printf("ft_bzero = %d\n", b[i]);
		i++;
	}
	i = 0;
	bzero(c, n);
	while (c[i] != -1)
	{
		printf("bzero = %d\n", c[i]);
		i++;
	}
}
