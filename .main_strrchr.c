#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <bsd/string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	(void)argc;
	write (1, ft_strrchr(argv[1], argv[2][0]), 1);
	write (1, "\n", 1);
	write (1, strrchr(argv[1], argv[2][0]), 1);
	write (1, "\n", 1);
}
