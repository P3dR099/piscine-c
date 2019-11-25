#include <stdio.h>

int main()
{
	int x;
	int *dir;
	x = 42;
	*dir = x;
	
	printf("%i", *dir);
}
