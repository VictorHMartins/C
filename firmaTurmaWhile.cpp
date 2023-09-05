#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <math.h>

main ()
{
setlocale (LC_ALL,"Portuguese");
struct aluno
     {int RA;
     float n1,n2,media;
     };
aluno turma[5];
     int i,op,qtdeap=0, RAmaior;
     float mediat, soma=0, maior;
printf ("Cadastrar todos os alunos");

for(i=0;i<5;i++)
   {printf("\nRA: ");
   scanf("%i",&turma[i].RA);
   printf("\nNota1: ");
   scanf("%f",&turma[i].n1);
   printf("\nNota 2: ");
   scanf ("%f",&turma[i].n2);
   }
printf("\nDigite sua opção: 1- calcular media,");
printf("\n 2-verificar quantos aprovados, ");
printf("\n 3-calcular a média da turma, ");
printf("\n 4-mostrar o RA do aluno com maior nota, ");
printf("\n 5-sair");
scanf("%i",&op);

while (op != 5)
     {switch (op)
          {case 1: for (i=0;i<5;i++)
                         {turma[i].media = (turma[i].n1 + turma[i].n2)/2;
                         soma = soma + turma[i].media;
                         printf("\nMédia do aluno %i: %f",i+1,turma[i].media);
			          }
			     break;
		case 2: for (i=0;i<5;i++)
		               {if(turma[i].media>=6)
			               {qtdeap++;
				 	     }
		               }
		          break;
		case 3: mediat = soma/5;
		          break;
		case 4: for(i=0;i<5;i++)
		              {if(turma[i].media > maior)
		                    {maior = turma[i].media;
		                    RAmaior = turma[i].RA;
					     }
				    }
				break;
		default: break;
		}
	printf("\nDigite sua opção: 1- calcular media,");
     printf("\n 2-verificar quantos aprovados, ");
     printf("\n 3-calcular a média da turma, ");
     printf("\n 4-mostrar o RA do aluno com maior nota, ");
     printf("\n 5-sair");
     scanf("%i",&op);
	} 
printf("\nForam aprovados %i alunos ", qtdeap);
printf("\nA média da turma foi %f", mediat);
printf("\nA maior nota: %f do RA %i", maior, RAmaior);
}
