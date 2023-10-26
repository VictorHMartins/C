//Faça um programa em C que guarde em um vetor os valores em reais de uma
//unidade de cada moeda: dólar, peso argentino, dinar do Bahrein, franco suíço,
//libra esterlina e euro. Considere que você tem uma empresa de turismo e atende
//a vários clientes. Cada pessoa vai viajar para um país diferente e precisa
//converter seu dinheiro para a moeda adequada. O programa deverá pedir que o
//usuário informe o valor em reais que a pessoa quer trocar e para qual moeda
//deseja converter e informe o total que ela irá receber na moeda desejada. Esse
//processo deverá se repetir até que o último cliente do dia seja atendido e o
//usuário informe o valor em reais igual a zero.

#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

main()

{
    Setlocale(LC_ALL "Portuguese");

    float moeda[6], valor, conversao;
    int cod;

    printf("\nDolar= 1");
    printf("\nPeso argentino= 2");
    printf("\nDinar do Bahrein= 3");
    printf("\nFranco suiço= 4");
    printf("\nLibra Esterlina=5");
    printf("\nEuro=6");
    printf("\n0 para parar o programa");

    printf("Digite o código de qual moeda deseja converter:")
        scanf("%i", &cod);

    switch (cod)

    {
    case 1:
        printf("\Dólar");
        printf("\nDigite um valor para conversão:");
        scanf("%f", &valor);
        conversao = valor * 5;
        break
    }

    {
    case 2:
        printf("\Peso argentino");
        printf("\nDigite um valor para conversão:");
        scanf("%f", &valor);
        conversao = valor * 0.014;
        break
    }

    {
    case 3:
        printf("\Dinar do Bahrein");
        printf("\nDigite um valor para conversão:");
        scanf("%f", &valor);
        conversao = valor * 5;
        break
    }

    {
    case 4:
        printf("\Franco suiço");
        printf("\nDigite um valor para conversão:");
        scanf("%f", &valor);
        conversao = valor * 5;
        break
    }

    {
    case 5:
        printf("\Libra Esterlina");
        printf("\nDigite um valor para conversão:");
        scanf("%f", &valor);
        conversao = valor * 5;
        break
    }

    {
    case 6:
        printf("\Euro");
        printf("\nDigite um valor para conversão:");
        scanf("%f", &valor);
        conversao = valor * 5;
        break
    }

    printf("O valor é de: %.2f", conversao);
}

