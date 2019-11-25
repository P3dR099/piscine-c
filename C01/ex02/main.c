void ft_swap(int *a, int *b);

int main()
{
        int a;
        int b;
        a = 10;
        b = 20;
        printf("B, es igual a: %d y A es igual a: %d ", a, b);
        ft_swap(&a, &b);
        printf("\nB, es igual a: %d y A es igual a: %d ", a, b);
}
