#include <stdio.h>
/*void swapnum(int *num1, int *num2)
{
   int tempnum;

   tempnum = *num1;
   *num1 = *num2;
   *num2 = tempnum;
}
int main( )
{
   int v1 = 3, v2 = 5 ;
   printf("Before swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);

   //calling swap function
   swapnum( &v1, &v2 );

   printf("\nAfter swapping:");
   printf("\nValue of v1 is: %d", v1);
   printf("\nValue of v2 is: %d", v2);
}*/

void funct1(int *num1, int *numb2)
{
/*	*num1 = 10;
	*num2 = 20;*/
}

int main()
{
	int n1 = 10;
	int n2 = 20;
	funct1(&n1, &n2);
	printf("%i", n1);
	printf("%i", n2);
}
