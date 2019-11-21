#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main()
{
        int var1 = 25;
        int var2 = 5;
        ft_ultimate_div_mod(&var1, &var2);
        printf("%i\n", var1);
        printf("%i", var2);
}
