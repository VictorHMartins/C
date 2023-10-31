#include <stdio.h>
int fatorial(int x)
{
    int f = 1;
    while (x > 1)
    {
        f = f * x;
        x = x - 1;
    }
    return f;
}
main()
{
    int n, fat;
    printf("\nDigite um número");
    scanf("%i", &n);
    fat = fatorial(n);
    printf("\nResultado: %i", fat);
}
