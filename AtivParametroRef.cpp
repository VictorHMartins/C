#include<conio.h>
#include<stdio.h>
#include<locale.h>
#include<math.h>

int somadref (int *a, int *b)
    {int s;
     printf("\na = %i e b = %i",*a,*b);
     *a = 2*(*a);
     *b = 2*(*b);
     printf("\na = %i e b = %i",*a,*b);
     s = *a + *b;
     return s;
    }
    
main()
  {
   setlocale(LC_ALL, "Portuguese");
    int x,y,res;
     printf("\nDigite o 1° número ");
     scanf("%i",&x);
     printf("\nDigite o 2° número ");
     scanf("%i",&y);
     res = somadref(&x,&y);
     printf("\nDobro de x + dobro de y = %i",res);
     printf("\n x = %i e y = %i",x,y);
  }

