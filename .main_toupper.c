/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main_toupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:39:07 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/17 17:04:30 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include <ctype.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	printf("ft_strlcat = %c\n", ft_toupper(argv[1][0]));
	printf("   strlcat = %c\n", toupper(argv[1][0]));
}
