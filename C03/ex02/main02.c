#include <string.h>
#include <stdio.h>
#include <unistd.h>



int main()
{
	char	x[500] = "mander";
	char 	y[500] = "meleon";

	printf("%s\n", strcat(x, y));

	char	a[500] = "mander";
	char	b[500] = "meleon";
	printf("%s", ft_strcat(a, b));

}
