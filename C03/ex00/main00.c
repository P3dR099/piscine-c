#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{

	char	x[] = "abc";
	char 	y[] = "xyz";
	
	printf("%i\n", strcmp(x, y));
	printf("%i", ft_strcmp(x, y));
}
