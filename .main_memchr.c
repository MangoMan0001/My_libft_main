#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	n;
	int		s[] = {1, 2, 3, 4, 5, 6, -1};
	int		i;
	int		c;
	int		*value;

	i = 0;
	c = 5;
	n = 4;
	(void)argc;
	(void)argv;
	value = (int *)ft_memchr(s, c, n * sizeof(int));
	if (value == 0)
		printf("value = 0\n");
	printf("ft_memchr = %d\n", value[0]);
	value = (int *)memchr(s, c, n * sizeof(int));
	printf("   memchr = %d", value[0]);
}
