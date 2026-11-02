/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main_memset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 04:21:38 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/16 20:20:04 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	n;
	int		c;
	int		a[] = {1, 2, 3, -1};
	int		b[] = {1, 2, 3, -1};
	int		i;

	i = 0;
	c =	1;
	n = 3;
	(void)argc;
	(void)argv;
	ft_memset(a, c, n);
	while (a[i] != -1)
	{
		printf("ft_memset = %d\n", a[i]);
		i++;
	}
	i = 0;
	memset(b, c, n);
	while (a[i] != -1)
	{
		printf("memset = %d\n", b[i]);
		i++;
	}
}
