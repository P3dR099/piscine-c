#include <stdio.h>
int main()
{
	int c;
	int *nb;

	c = 42;
	*nb = c;
	printf("%i", *nb);
}

