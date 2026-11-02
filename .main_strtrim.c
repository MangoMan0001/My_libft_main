#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	printf("ft_strtrim = %s\n", ft_strtrim(argv[1], argv[2]));
}
