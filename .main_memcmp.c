#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	size_t	n;
	int		s1[] = {1, 2, 3, 4, 5, 6, -1};
	int		s2[] = {1, 2, 2, 4, 5, 6, -1};

	n = 5;
	(void)argc;
	(void)argv;
	printf("ft_memcmp = %d\n", ft_memcmp(s1, s2, n));
	printf("   memcmp = %d\n", memcmp(s1, s2, n));
}
