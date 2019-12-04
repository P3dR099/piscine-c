#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{

	char	x[] = "ssfabsf";
	char 	y[] = "";

	printf("%i\n", strncmp(x, y, 2));
	printf("%i", ft_strncmp(x, y, 2));
}
