#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	big[] = "";

	(void)argc;
	printf("ft_strnstr = %s\n", ft_strnstr(big, argv[1], argv[2][0] - '0'));
	printf("   strnstr = %s\n", strnstr(big, argv[1], argv[2][0] - '0'));
}
