#include <stdio.h>

int *ft_strlowcase(char *str);

int main()
{
	char str[10] = "iadfh4h";
	char *z = ft_strlowcase(str);
	printf("%s\n", z);
	return (0);
}
