/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main_strlcat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:46:26 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/17 16:45:38 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	dest1[] = "aaabbb\0ccc";
	char	dest2[] = "aaabbb\0ccc";
	size_t	v;

	(void)argc;
	v = ft_strlcat(dest1, argv[1], argv[2][0] - '0');
	printf("ft_strlcat = %s v = %zu\n", dest1, v);
	v = strlcat(dest2, argv[1], argv[2][0] - '0');
	printf("   strlcat = %s v = %zu\n", dest2, v);
}
