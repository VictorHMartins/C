#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<locale.h>

main()
{setlocale(LC_ALL,"Portuguese");
int i,j,mat1[2][3], mat2[2][3],res[2][3],maior=0;
 for(i=0;i<2;i++)
   {for(j=0;j<3;j++)
    {printf("\nDigite um valor");
	scanf("%i",&mat1[i][j]);
    if(mat2[i][j]>maior)
	  {maior = mat1 [i][j];
	  }
    }
   }
  for(i=0;i<2;i++)
   {for(j=0;j<3;j++)
    {printf("\nDigite um valor");
	scanf("%i",&mat2[i][j]);
	if(mat2[i][j]>maior)
	  {maior = mat2 [i][j];
	  }
    }
   }
   for(i=0;i<2;i++)
   {for(j=0;j<3;j++)
   {
   res[i][j]=mat1[i][j]+mat2[i][j];
   printf("\nO resultado será %i",res[i][j]);
   }
   }
printf("\nO maior valor é %i ",maior);
}
