#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char *numPtr2);
int main()
{
   char numPtr[100] = "dsghe545754";

   printf( "Convirtiendo la cadena \"%s\" en un numero: %d\n", numPtr, atoi(numPtr));
   char numPtr2[100] = "heyq36436";
   printf("Convirtiendo la cadena \"%s\" en un numero: %d\n", numPtr2, ft_atoi(numPtr2));

   return 0;
}
