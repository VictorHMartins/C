//Fa�a um programa que simule o funcionamento de uma
//calculadora. O usu�rio dever� digitar 3 n�meros e o programa
//dever� ter fun��es espec�ficas para calcular a soma dos
//n�meros, a subtra��o de 2 deles, a multiplica��o entre
//dois deles, a divis�o de dois deles (desde que um n�o seja
//zero), e a m�dia entre os tr�s. O programa principal
//dever� ter um la�o de repeti��o permitindo ao usu�rio
//obter os resultados de todas as fun��es, se quiser.

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
        printf("\nErro: Divis�o por zero!");
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
    
     printf("\nDigite o primeiro n�mero: ");
     scanf("%f",&n1);
     printf("\nDigite o segundo n�mero: ");
     scanf("%f",&n2);
     printf("\nDigite o terceiro n�mero: ");
     scanf("%f",&n3);
    
    printf("\nEscolha a opera��o que deseja realizar:");
    printf("\n1. Soma dos n�meros");
    printf("\n2. Subtra��o de dois n�meros");
    printf("\n3. Multiplica��o entre dois n�meros");
    printf("\n4. Divis�o de dois n�meros");
    printf("\n5. M�dia dos tr�s n�meros");
    printf("\n6. Sair");
    scanf("%i",&op);
    
  while (op != 5)
   {switch (op) 
    {case 1 : printf ("\nSoma dos n�meros");
              result = calcsoma (n1,n2,n3);
              printf("\nO resultado ser�: %f", total);
              break; 
      
	case 2 : printf ("\nSubtra��o de dois n�meros");
              result = calcsubtracao (n1,n2);
              printf("\nO resultado ser�: %f", total);
              break; 
		    
	case 3 : printf ("\nMultiplica��o entre dois n�meros");
              result = calcmultiplicacao (n1,n2);
              printf("\nO resultado ser�: %f", total);
              break;          
     
	case 4 : printf ("\nDivis�o de dois n�meros");
              result = calcdivisao(n1,n2);
              printf("\nO resultado ser�: %f", total);
              break; 
	
	case 5 : printf ("\nM�dia dos tr�s n�meros");
              result = calcularMedia (n1,n2,n3);
              printf("\nO resultado ser�: %f", total);
              break;  
		   
	default: printf ("sair");
    }
  }
 }
		         
               
               
               
