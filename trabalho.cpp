#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>

main()
{setlocale(LC_ALL,"Portuguese");

struct produto

    {int cod;                                                        
    char descricao[30];                                       
    float preco;                                                   
	int qtde; 
	};
	
produto info [5];
int i;
float aumento,percaumento;

for(i=0;i<5;i++)
  {
   printf("\nDigite o c�digo do produto:");
   scanf("\%i",&info[i].cod);
   printf("\nDigite a descri��o do produto:");
   scanf("%s",&info[i].descricao);
   printf("\nDigite o pre�o:");
   scanf("%f",&info[i].preco);
   printf("\nDigite a quantidade do produto:");
   scanf("%i",&info[i].qtde);
 }
 
   printf("\nEscolha uma op��o");
   printf("\n1-Mostre os dados cadastrados ");
   printf("\n2-Digitar um percentual de aumento de pre�os e altere os pre�os dos produtos");
   printf("\n3-Informe a descri��o dos produtos que t�m quantidade em estoque abaixo de 10 unidades");
   printf("\n4-Informe a descri��o dos produtos que t�m pre�os acima de R$ 1.000,00");
   printf("\n5-Informe o produto mais caro e o mais barato.");
   printf("\n6-Sair");
   
   while (op != 5)
     {switch (op)
          {case 1: for (i=0;i<5;i++)
           {
		   printf("\nDados Cadastrados!");
           printf("\nC�digo do produto: %i",info[i].cod)
           printf("\nDescri��o do produto: %s",info[i].descricao);
           printf("\nPre�o do produto: %f",info[i].preco);
           printf("\nQuantidade do produto: %i",info[i].qtde);
           }
            break;
            
           case 2: for (i=0;i<5;i++)
           {
           printf("\nDigite o percentual do aumento:");
           scanf("%f",&percaumento);
           aumento= info[i].preco*percaumento/100;
           info[i].preco= info[i].preco + aumento;
           }
            break;
            
           case 3: for (i=0;i<5;i++)
           { if (info[i].qtde<10)
           {printf("O produto %s, tem quantidade inferior a 10 em estoque",info[i].qtde);
		   }
		   break;
            
           case 4: for (i=0;i<5;i++)
           { if (info[i].preco>1000)
           {printf("O produto %f tem o pre�o acima de R$ 1.000,00");
		   }
		   break;
}
