#include <stdio.h>

int ft_strcapitalize(char *str);

int main()
{
	char *str = "hola quetal colega";
	int z = ft_strcapitalize(*str);
	printf("%c\n", z);
	return (0);
}
