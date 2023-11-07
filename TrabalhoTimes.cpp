#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <math.h>
int i;
struct time
    
    {
    	int codigo;
    	char nome[30];
    	int qtdeP;
    	char artilheiro[30];
    	int vitorias;
    	int gols;
	};
	time times [20];
	
	cadastrartTimes (time c[20])
	{
	for (i=0;i<20;i++)
	{
	printf("Digite o código do time:");
	scanf("%i",&times[i].codigo);
	printf("Digite o nome do time:");
	scanf("%s",&times[i].nome);
   }
}

   zerarCampos (time z[20])
   {
   	for (i=0;i<20;i++)
   	{
   		times[i].gols = 0;
   		times[i].vitorias = 0;
   		times[i].qtdeP = 0;
	   }
   }
   
   alterarPontosVitorias (time a[20], int codigo, int pontos, int vitorias)
   {
   	for (i=0;i<20;i++)
   	{
        if (times[i].codigo == codigo) 
		{
            times[i].qtdeP = pontos;
            times[i].vitorias = vitorias;
            break;
        }
    }
}

  alterarArtilheiro ( time artilheiro[20],int codigo, char novoArtilheiro [30])
   {
   	for (i=0;i<20;i++)
   	{
        if (times[i].codigo == codigo) 
		{
			strcpy ( times[i].artilheiro , novoArtilheiro );
		}
	}
}
 
  infoCampeao (time ic[20])
  {
   int maxPontos = 0;
  int campeao = 0;
  {
  for (int i = 0; i < 20; i++) {
        if (times[i].qtdeP > maxPontos) 
		{
            maxPontos = times[i].qtdeP;
            campeao = i;
        }
    }

    if (campeao != -1) {
        printf("Time vencedor: %s\n", times[campeao].nome);
        printf("Nome do artilheiro: %s\n", times[campeao].artilheiro);
        printf("Quantidade de pontos: %d\n", maxPontos);
    } else {
        printf("Nenhum time cadastrado ou nenhum vencedor encontrado.\n");
    }
}
}

 artilheiroMaisGols ( time art[20])
  {
  int maxGols = 0;
  int artilheiro = 0;
  {
  for (i = 0; i < 20; i++)
  { (times[i].gols > maxGols);
  maxGols = times[i].gols;
            artilheiro = i;
        }

    if (artilheiro != -1) {
        printf("Nome do artilheiro do time com mais gols marcados: %s\n", times[artilheiro].artilheiro);
    } else {
        printf("Nenhum time cadastrado ou nenhum artilheiro encontrado.\n");
    }
}
}
main()
{
	setlocale(LC_ALL, "Portuguese");
{
    struct time times[20];
    int opcao, codigo, pontos, vitorias;
    char novoArtilheiro[100];

    int n = 20;  // número de times

    // Menu de opções
    while (1) {
        printf("\nOpções:\n");
        printf("1. Cadastrar times\n");
        printf("2. Zerar campos de todos os times\n");
        printf("3. Alterar pontos e vitórias de um time\n");
        printf("4. Alterar artilheiro de um time\n");
        printf("5. Informar time vencedor do campeonato\n");
        printf("6. Informar artilheiro do time com mais gols marcados\n");
        printf("7. Sair\n");
        printf("Escolha a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrartTimes(times);
                break;
            case 2:
                zerarCampos(times);
                printf("Campos zerados para todos os times.\n");
                break;
            case 3:
                printf("Digite o código do time: ");
                scanf("%d", &codigo);
                printf("Digite a nova quantidade de pontos: ");
                scanf("%d", &pontos);
                printf("Digite a nova quantidade de vitórias: ");
                scanf("%d", &vitorias);
                alterarPontosVitorias(times, codigo, pontos, vitorias);
                break;
            case 4:
                printf("Digite o código do time: ");
                scanf("%d", &codigo);
                printf("Digite o nome do novo artilheiro: ");
                scanf("%s", novoArtilheiro);
                alterarArtilheiro(times, codigo, novoArtilheiro);
                break;
            case 5:
                infoCampeao(times);
                break;
            case 6:
                artilheiroMaisGols(times);
                break;
            case 7:
                return 0;  // Encerra o programa
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}
}
