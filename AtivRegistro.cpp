#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

main()

{
    setlocale(LC_ALL, "Portuguese");

    struct produto

    {
        int cod;
        char descricao[30];
        float preco;
        int qtde;
    };
    float media;
    int estq = 0;
    produto A, B, C;

    printf("Digite o nome do produto:");
    scanf("%s", &A.descricao);
    printf("Digite o codigo do produto:");
    scanf("%i", &A.cod);
    printf("Digite o preço do produto:");
    scanf("%f", &A.preco);
    printf("Digite a quantidade do produto:");
    scanf("%i", &A.qtde);

    printf("%i \n", A.qtde);

    printf("Digite o nome do segundo produto:");
    scanf("%s", &B.descricao);
    printf("Digite o codigo do segundo produto:");
    scanf("%i", &B.cod);
    printf("Digite o preço do segundo produto:");
    scanf("%f", &B.preco);
    printf("Digite a quantidade do segundo produto:");
    scanf("%i", &B.qtde);

    printf("Digite o nome do terceiro oproduto:");
    scanf("%s", &C.descricao);
    printf("Digite o codigo do terceiro produto:");
    scanf("%i", &C.cod);
    printf("Digite o preço do terceiro produto:");
    scanf("%f", &C.preco);
    printf("Digite a quantidade do terceiro produto:");
    scanf("%i", &C.qtde);

    media = (A.preco + B.preco + C.preco) / 3;
    estq = A.qtde + B.qtde + C.qtde;

    printf("A media do preço dos produtos é:%.2f", media);
    printf("\nA quantidade total do estoque é: %i", estq);
}
