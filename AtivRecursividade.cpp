#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>
int maximo(int n, int vetor[3])
{
    if (n == 1)
        return vetor[0];
    else
    {
        int x;
        x = maximo(n - 1, vetor);
        if (x > vetor[n - 1])
            return x;
        else
            return vetor[n - 1];
    }
}
main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, vetor[3], maior;

    for (i = 0; i < 3; i++)
    {
        printf("\nDigite um número inteiro");
        scanf("%i", &vetor[i]);
    }
    maior = maximo(3,vetor);
    printf("\nO maior número é %i", maior);
}
