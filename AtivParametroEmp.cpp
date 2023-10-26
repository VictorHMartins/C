//Faça um programa em C que receba o
//total de receitas de uma empresa em
//um ano e o total das despesas no
//mesmo período. O programa deverá
//ter uma função para calcular o lucro
//(ou prejuízo) dessa empresa nesse ano
//e informar se ela atingiu o objetivo de
//ter lucro acima de R$ 500.000,00 no ano.

#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

float lucrof(float a, float b)
{
    float s;
    s = a - b;
    return s;
}

main()
{
    setlocale(LC_ALL, "Portuguese");
    float l, p, result;
    printf("\nDigite o valor de lucro:");
    scanf("%f", &l);
    printf("\nDigite o valor de despesas:");
    scanf("%f", &p);
    result = lucrof(l, p);

    if (result >= 500.000)
    {
        printf("\nObrjetivo atingido!");
        printf("\nLucro de %f", result);
    }

    else
    {
        printf("\nObrjetivo não atingido!");
        printf("\nPrejuizo de %f", result);
    }
}
        printf("\nObrjetivo atingido!");
        printf("\nLucro de %f",result);
       }
       
    else 
         {
          printf("\nObrjetivo não atingido!");
          printf("\nPrejuizo de %f",result);
         } 
}
