#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int escolha;
int status;
enum resposta {
	PARADO = -1,
	RODANDO = 0,
	ESCOLHA_1 = 1,
	ESCOLHA_2 = 2,
	ESCOLHA_3 = 3,
	};
int leituraLimpa(unsigned int *entrada) {
if (scanf("%d",entrada)!=1) {
	while(getchar()!='\n');
	return status += PARADO;
  }
  return status += RODANDO;	
}

int main(void) {
do {
printf("==ESCOLHA O TIPO DE SIMULAÇÃO==");
printf("\n1.Genética de Mendel\n");
printf("\n2.(WIP)\n");
if (leituraLimpa(&escolha)!=1||escolha>2) {printf("\nResposta Invalida\n"); return PARADO;}
  } while(!escolha);
}
