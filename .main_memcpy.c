/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main_memcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:24:57 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/16 21:31:46 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	n;
	int		dest1[] = {1, 2, 3, -1};
	int		dest2[] = {1, 2, 3, -1};
	int		src[] = {5, 6, 7, -1};
	int		i;

	i = 0;
	n = 2;
	(void)argc;
	(void)argv;
	ft_memcpy(dest1, src, n * sizeof(int));
	while (dest1[i] != -1)
	{
		printf("ft_memcpy = %d\n", dest1[i]);
		i++;
	}
	i = 0;
	memcpy(dest2, src, n * sizeof(int));
	while (dest2[i] != -1)
	{
		printf("memcpy = %d\n", dest2[i]);
		i++;
	}
}
