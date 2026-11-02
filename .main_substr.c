#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	printf("ft_substr = %s\n", ft_substr(argv[1], atoi(argv[2]), atoi(argv[3])));
}
