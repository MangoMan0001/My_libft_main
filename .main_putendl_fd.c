#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	ft_putendl_fd(argv[1], atoi(argv[2]));
	(void)argc;
}
