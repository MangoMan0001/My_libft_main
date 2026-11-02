/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main_strlcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:02:54 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/17 15:43:58 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	dest1[] = "aaabbbccc";
	char	dest2[] = "aaabbbccc";
	size_t	v;

	(void)argc;
	v = ft_strlcpy(dest1, argv[1], argv[2][0] - '0');
	printf("ft_strlcpy = %s v = %zu\n", dest1, v);
	v = strlcpy(dest2, argv[1], argv[2][0] - '0');
	printf("   strlcpy = %s v = %zu\n", dest2, v);
}
