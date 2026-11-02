#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

char	mapisan(unsigned int a, char b)
{
	(void)a;
	return (b + 1);
}

int	main(int argc, char **argv)
{
	char	*result;
	int		i;

	i = 0;
	result = ft_strmapi(argv[1], mapisan);
	(void)argc;
	printf("ft_strmapi = %s\n", result);
}
