#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	ft_putchar_fd(argv[1][0], atoi(argv[2]));
	(void)argc;
}
