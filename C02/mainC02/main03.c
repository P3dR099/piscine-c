#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char str[] = "1111";
	int z = ft_str_is_numeric(str);
	printf("%d\n", z);
	return (0);
}
