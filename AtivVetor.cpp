#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main()

{setlocale(LC_ALL,"Portuguese");
float tempm[12],maiort=-99,menort=99;
int i,posmaior,posmenor;

for(i=0;i<12;i++)
    {printf("\nDigite a temperatura média do męs:");
    scanf("%f",&tempm[i]);
    }
    
for(i=0;i<12;i++)
    {if(tempm[i] > maiort)
        {maiort= tempm[i];
        posmaior = i;
		}
	
   if(tempm[i] < menort)
      {menort= tempm[i];
      posmenor = i;
	  }
}
switch(posmaior)
    {case 0:printf("\nMęs com maior temperatura:Janeiro");
	break;
	
	case 1:printf("\nMęs com maior temperatura:Fevereiro");
	break;
	
	case 2:printf("\nMęs com maior temperatura:nMarço");
	break;
	
	case 3:printf("\nMęs com maior temperatura:Abril");
	break;
	
	case 4:printf("\nMęs com maior temperatura:Maio");
	break;
	
	case 5:printf("\nMęs com maior temperatura:Junho");
	break;
	
	case 6:printf("\nMęs com maior temperatura:Julho");
	break;
	
	case 7:printf("\nMęs com maior temperatura:Agosto");
	break;
	
	case 8:printf("\nMęs com maior temperatura:Setembro");
	break;
	
	case 9:printf("\nMęs com maior temperatura:Outubro");
	break;
	
	case 10:printf("\nMęs com maior temperatura:Novembro");
	break;
	
	case 11:printf("\nMęs com maior temperatura:Dezembro");
	break;
    }

printf("\nCom temperatura de:%.2f", maiort);

    switch(posmenor)
    {case 0:printf("\nMęs com menor temperatura:Janeiro");
	break;
	
	case 1:printf("\nMęs com menor temperatura:Fevereiro");
	break;
	
	case 2:printf("\nMęs com menor temperatura:Março");
	break;
	
	case 3:printf("\nMęs com menor temperatura:Abril");
	break;
	
	case 4:printf("\nMęs com menor temperatura:Maio");
	break;
	
	case 5:printf("\nMęs com menor temperatura:Junho");
	break;
	
	case 6:printf("\nMęs com menor temperatura:Julho");
	break;
	
	case 7:printf("\nMęs com menor temperatura:Agosto");
	break;
	
	case 8:printf("\nMęs com menor temperatura:Setembro");
	break;
	
	case 9:printf("\nMęs com menor temperatura:Outubro");
	break;
	
	case 10:printf("\nMęs com menor temperatura:Novembro");
	break;
	
	case 11:printf("\nMęs com menor temperatura:Dezembro");
	break;
    }
printf("\nCom temperatura de:%.2f", menort);
}
