#include<stdio.h>
#include<locale.h>
#include<conio.h>
#include<math.h>

main()

{setlocale(LC_ALL,"Portuguese");
int a,i,gab[10],res[10],nota=0;

for(i=0;i<10;i++)
   {printf("digite a resposta certa");
   scanf("%i",&gab[i]);
   }
   
for(a=0;a<15;a++)

   {nota=0;
   for(i=0;i<10;i++) 
    {
	printf("\nDigite sua resposta:");
    scanf("%i",&res[i]);
    
    if(gab[i]==res[i])
    {nota++;
	}
}
printf("\nSua nota é:%i",nota);
   }
   

}
