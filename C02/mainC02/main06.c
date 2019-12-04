#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char str[] = "Ç";
	int z = ft_str_is_printable(str);
	printf("%d\n", z);
	return (0);
}
