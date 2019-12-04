#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
   char s1[17] = "Hola";
   char s2[6] = "amigos";

   printf( "s1 =  %s\t", s1 );
   printf( "s2=%s  \n", s2 );
   strncat( s1, s2, 0);
   printf( "s1=%s\n\n", s1 );
   ft_strncat(s1, s2, 0);
   printf("mi fucntion: %s\n\n", s1);
   return 0;
}
