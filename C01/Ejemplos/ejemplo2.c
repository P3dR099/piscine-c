
#include <stdio.h>

int main()
{
	int a;
	int *ptr;

	a = 56;
	ptr = &a;  // ptr es la direccion de a virtualmente
	printf("%d\n", *ptr);
	*ptr = 78;  // Asigna el valor 78 a la var ptr antes definida(ptr = a)
	printf("%d\n", a);
	return(0);


}
