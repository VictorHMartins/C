//Faça um programa que simule o funcionamento de uma
//calculadora. O usuário deverá digitar 3 números e o programa
//deverá ter funções específicas para calcular a soma dos
//números, a subtração de 2 deles, a multiplicação entre
//dois deles, a divisão de dois deles (desde que um não seja
//zero), e a média entre os três. O programa principal
//deverá ter um laço de repetição permitindo ao usuário
//obter os resultados de todas as funções, se quiser.

#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

float calcsoma(float a, float b, float c) {
    return a + b + c;
}

float calcsubtracao(float a, float b) {
    return a - b;
}

float calcmultiplicacao(float a, float b) {
    return a * b;
    
float calcdivisao(float a, float b) 
    {if (b != 0) {
        return a / b;
    } else {
        printf("\nErro: Divisão por zero!");
        return 0;
    }
}

float calcularMedia(float a, float b, float c) {
    return (a + b + c) / 3;
    
main()
  {
   setlocale(LC_ALL, "Portuguese");
    float n1, n2, n3, result;
    int op;
    
     printf("\nDigite o primeiro número: ");
     scanf("%f",&n1);
     printf("\nDigite o segundo número: ");
     scanf("%f",&n2);
     printf("\nDigite o terceiro número: ");
     scanf("%f",&n3);
    
    printf("\nEscolha a operação que deseja realizar:");
    printf("\n1. Soma dos números");
    printf("\n2. Subtração de dois números");
    printf("\n3. Multiplicação entre dois números");
    printf("\n4. Divisão de dois números");
    printf("\n5. Média dos três números");
    printf("\n6. Sair");
    scanf("%i",&op);
    
  while (op != 5)
   {switch (op) 
    {case 1 : printf ("\nSoma dos números");
              result = calcsoma (n1,n2,n3);
              printf("\nO resultado será: %f", total);
              break; 
      
	case 2 : printf ("\nSubtração de dois números");
              result = calcsubtracao (n1,n2);
              printf("\nO resultado será: %f", total);
              break; 
		    
	case 3 : printf ("\nMultiplicação entre dois números");
              result = calcmultiplicacao (n1,n2);
              printf("\nO resultado será: %f", total);
              break;          
     
	case 4 : printf ("\nDivisão de dois números");
              result = calcdivisao(n1,n2);
              printf("\nO resultado será: %f", total);
              break; 
	
	case 5 : printf ("\nMédia dos três números");
              result = calcularMedia (n1,n2,n3);
              printf("\nO resultado será: %f", total);
              break;  
		   
	default: printf ("sair");
    }
  }
 }
		         
               
               
               
