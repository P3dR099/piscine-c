#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
   char s1[13] = "Hola a todos";
   char s2[3] = "o";

   printf( "s1=%s\n", s1 );
   printf( "s2=%s\n", s2 );
   printf( "strstr(s1,s2) = %s\n", strstr( s1, s2 ));
   printf( "s1=%s\n", s1);
   printf( "s2=%s\n", s2);
   printf(" Mi str(s1,s2) = %s\n", ft_strstr( s1, s2));

   return 0;
}
