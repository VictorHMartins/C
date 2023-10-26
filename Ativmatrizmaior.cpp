//Faça um programa em C que guarde números inteiros
//em uma matriz com 2 linhas e 5 colunas e informe qual
//o maior valor armazenado
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>

main()

{
    int i, j, matriz[2][5], maior = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("\nDigite um valor");
            scanf("%i", &matriz[i][j]);
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }
    printf("\nO maior valor é %i ", maior);
}


