#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	printf ("ft_strncmp = %d",ft_strncmp(argv[1], argv[2], argv[3][0] - '0'));
	printf ("   strncmp = %d",strncmp(argv[1], argv[2], argv[3][0] - '0'));
}
