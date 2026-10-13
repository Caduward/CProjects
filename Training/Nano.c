#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned int escolha;
int status;
enum resposta {
	RODANDO = 1,
	PARADO = 0,
	ESCOLHA_1 = 2,
	ESCOLHA_2 = 3,
	ESCOLHA_3 = 4,
	};
int leituraLimpa(unsigned int *entrada) {
if (scanf("%u",entrada)!=1) {
	while(getchar()!='\n');
	return status = RODANDO;
  }
  return status = PARADO;	
}

int main(void) {
do {
printf("==ESCOLHA O TIPO DE SIMULAÇÃO==");
printf("\n1.Genética de Mendel\n");
printf("\n2.(WIP)\n");
leituraLimpa(&escolha);
  } while(status||(escolha)>2);
  printf("\nPASSOU!\n");
}
