#include <stdio.h>

int *ft_strupcase(char *str);

int main()
{
	char str[] = "iadfh4h45!4545";
	char *z = ft_strupcase(str);
	printf("%s\n", z);
	return (0);
}
