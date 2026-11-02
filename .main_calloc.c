#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("ft_calloc = %s\n", (char *)ft_calloc(0, -5));
	printf("   calloc = %s\n", (char *)calloc(0, -5));
}
