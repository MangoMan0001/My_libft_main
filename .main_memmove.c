/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main_memmove.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhirose <ayhirose@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:58:59 by ayhirose          #+#    #+#             */
/*   Updated: 2025/10/21 12:43:44 by ayhirose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

// int	main(int argc, char **argv)
// {
// 	size_t	n;
// 	int		dest1[] = {1, 2, 3, 4, 5, 6, -1};
// 	int		dest2[] = {1, 2, 3, 4, 5, 6, -1};
// 	int		i;

// 	i = 0;
// 	n = 3;
// 	(void)argc;
// 	(void)argv;
// 	ft_memmove(&dest1[1], &dest1[0], n * sizeof(int));
// 	while (dest1[i] != -1)
// 	{
// 		printf("ft_bzero = %d\n", dest1[i]);
// 		i++;
// 	}
// 	i = 0;
// 	memmove(&dest2[1], &dest2[0], n * sizeof(int));
// 	while (dest2[i] != -1)
// 	{
// 		printf("bzero = %d\n", dest2[i]);
// 		i++;
// 	}
// }

int main(void)
{
	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char ss[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char s1[] = { 0,  0,  0,  0,  0,  0, 0};
	// char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	// char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	// char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	ft_memmove(s0, s, 7);
	printf("/* 1 */ me = %s\n", s0);
	memmove(s1, ss, 7);
	printf("/* 1 */ true = %s", s1);

	// printf("/* 2 */ me =%s", ft_memmove(s, s + 2, 0));
	// printf("/* 2 */ true =%s", memmove(s, s + 2, 0));
	// printf("/* 3 */ me = %s", ft_memmove(s, s + 2, 2));
	// printf("/* 3 */ true = %s", memmove(s, s + 2, 2));
	// printf("/* 4 */ me = %s", ft_memmove(sResult + 1, sResult, 2));
	// printf("/* 4 */ true = %s", memmove(sResult + 1, sResult, 2));
	write(1, "\n", 1);
}
