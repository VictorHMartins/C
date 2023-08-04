#include<stdio.h>
main()
{float pre, prevista, preprazo;
int op;
printf("Digite p preço do produto");
scanf("%f", &pre);
printf("Digite 1 para à vista e 2 para à prazo");
scanf("%i",&op);
if(op== 1)
  {prevista- pre-(pre*10/100);
  printf("O preço à vista será %f", prevista);
  }
  else{preprazo = pre + pre*5/100;
  printf("O preço a prazo é %f", preprazo);
  }
}
