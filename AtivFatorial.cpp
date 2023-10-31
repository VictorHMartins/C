#include <stdio.h>
main()
{
    int f, n;
    printf("\nDigite um número");
    scanf("%i", &n);
    f = 1;
    while (n > 1)
    {
        f = f * n;
        n = n * 1;
    }
    printf("\nFatorial de %i = %i", n, f);
}
