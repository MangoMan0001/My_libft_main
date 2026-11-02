#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	*result;
	int		i;

	i = 0;
	result = ft_itoa(atoi(argv[1]));
	(void)argc;
	printf("ft_itoa = %s\n", result);
}
