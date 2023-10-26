#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdio.h>

main()
{
    setlocale(LC_ALL, "Portuguese");
    int catp, proddesc, i;
    float preco, valord, precod, soma, mediadesc, total, totald, venda;

    proddesc = 0;
    soma = 0;
    total = 0;
    venda = 0;
    totald = 0;

    for (i = 1; i <= 15; i++)

    {
        printf("\nDigite a categoria do produto:");
        scanf("%i", &catp);

        switch (catp)
        {
        case 1:
            printf("\nEletrônicos!");
            printf("\nDigite o preço do produto:");
            scanf("%f", &preco);

            if (preco <= 50)
            {
                printf("\nO produto não possui descontos!");
                total = total + preco;
            }
            else if (preco <= 150.00)
            {
                valord = preco * 15 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 15 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            else if (preco >= 150.01)
            {
                valord = preco * 20 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 20 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            break;

        case 2:
            printf("\nPanelas!");
            printf("\nDigite o preço do produto:");
            scanf("%f", &preco);

            if (preco <= 70)
            {
                printf("\nO produto não possui descontos!");
                total = total + preco;
            }
            else if ((preco >= 70.01) && (preco <= 170.00))
            {
                valord = preco * 15 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 15 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            else if (preco >= 170.01)
            {
                valord = preco * 20 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 20 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            break;

        case 3:
            printf("\nToalhas de banho!");
            printf("\nDigite o preço do produto:");
            scanf("%f", &preco);

            if (preco <= 30)
            {
                printf("\nO produto não possui descontos!");
                total = total + preco;
            }
            else if ((preco >= 30.01) && (preco <= 130.00))
            {
                valord = preco * 15 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 15 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            else if (preco >= 130.01)
            {
                valord = preco * 20 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 20 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            break;

        case 4:
            printf("\nRoupas de cama!");
            printf("\nDigite o preço do produto:");
            scanf("%f", &preco);

            if (preco <= 40)
            {
                printf("\nO produto não possui descontos!");
                total = total + preco;
            }
            else if ((preco >= 40.01) && (preco <= 140.00))
            {
                valord = preco * 15 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 15 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            else if (preco >= 140.01)
            {
                valord = preco * 20 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 20 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            break;

        case 5:
            printf("\nBeleza!");
            printf("\nDigite o preço do produto:");
            scanf("%f", &preco);

            if (preco <= 60)
            {
                printf("\nO produto não possui descontos!");
                total = total + preco;
            }
            else if ((preco >= 60.01) && (preco <= 160.00))
            {
                valord = preco * 15 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 15 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            else if (preco >= 160.01)
            {
                valord = preco * 20 / 100;
                printf("\nO valor do desconto será %.2f:", valord);
                precod = preco - (preco * 20 / 100);
                printf("\nO valor do produto com descoto derá de %.2f:", precod);
                proddesc = proddesc + 1;
                soma = soma + valord;
                totald = totald + precod;
            }
            break;

        case 6:
            printf("\nOutros!");
            printf("\nDigite o preço do produto:");
            scanf("%f", &preco);
            if (preco >= 0)
            {
                printf("\nO produto não possui descontos!");
                total = total + preco;
            }

            break;
        default:
            printf("\nCategoria invalida");
        }
    }
    venda = total + totald;
    mediadesc = soma / proddesc;
    printf("\nAquantidade de produtos que tiveram descontos é %i:", proddesc);
    printf("\nA média dos descontos é %.2f", mediadesc);
    printf("\nO total da venda é %.2f", venda);
}
