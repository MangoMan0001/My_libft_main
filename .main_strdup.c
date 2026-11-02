#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	printf("ft_strdup = %s\n", ft_strdup(argv[1]));
	printf("   strdup = %s\n", strdup(argv[1]));
}
