#include<stdio.h>
main()
{float pre, prevista, preprazo;
int op;
printf("Digite p pre�o do produto");
scanf("%f", &pre);
printf("Digite 1 para � vista e 2 para � prazo");
scanf("%i",&op);
if(op== 1)
  {prevista- pre-(pre*10/100);
  printf("O pre�o � vista ser� %f", prevista);
  }
  else{preprazo = pre + pre*5/100;
  printf("O pre�o a prazo � %f", preprazo);
  }
}
