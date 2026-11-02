#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

void	terisan(unsigned int a, char *b)
{
	(void)a;
	*b = '1';
}

int	main(int argc, char **argv)
{
	ft_striteri(argv[1], terisan);
	(void)argc;
	printf("ft_striteri = %s\n", argv[1]);
}
