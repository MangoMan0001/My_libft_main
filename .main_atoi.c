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
	// char *s = "e + "++1"";
	char e[] ="\t\n\v\f\r++1";

	// printf("ft_strnstr argv = %d\n", ft_atoi(argv[1]));
	printf("ft_strnstr    s = %d\n", ft_atoi((e)));
	// printf("   strnstr argv = %d\n", atoi(argv[1]));
	printf("   strnstr    s = %d\n", atoi(e));
}
