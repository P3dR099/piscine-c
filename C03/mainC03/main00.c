#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main()
{

	char	x[] = "holi";
	char 	y[] = "holoo";
	
	printf("%i\n", strcmp(x, y));
	printf("%i", ft_strcmp(x, y));
}
