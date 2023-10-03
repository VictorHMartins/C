//Faça um programa em C que peça ao usuário para digitar 3 notas de um aluno e uma letra, que deve ser A ou P. 
//O programa terá duas funções. Se o usuário digitar A, o programa deverá chamar uma função para calcular a média aritmética das 3 notas. 
//Se for P, o programa chamará outra função que retorne a média ponderada, considerando os pesos 3, 2 e 1, respectivamente.

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

float media (float a, float b, float c)
      {
	  float s;
	  s= (a + b + c )/ 3;
	  return s; 
	  }
	  
float mediap (float a, float b, float c)
      {
	  float s;
	  s = (a*3 + b*2 + c*1) / 6;
	  return s; 
	  }


main()
  {
   setlocale(LC_ALL, "Portuguese");
    float nt1, nt2, nt3, total;
    char op; 
     printf("\nDigite a primeira nota");
     scanf("%f",&nt1);
     printf("\nDigite a segunda nota");
     scanf("%f",&nt2);
     printf("\nDigite a terceira nota");
     scanf("%f",&nt3);
     printf ("\nDigite A para calcular a média aritmética ou P para calcular a média pomderada");
     scanf("%s",&op);
     
     switch (op)
     {
	  case 'A' : printf("\Média aritmética!");
	  total = media (nt1,nt2,nt3);
	  printf("\nO resultado será: %f", total);
	  break;
         
	  case 'P': printf("\Média pomderada!");
	  total = mediap (nt1,nt2,nt3);
	  printf("\nO resultado será: %f", total);
	  break;
     }
}
