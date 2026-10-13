#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
	printf("\n==>Resposta inválida<==\n\n\n");
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
escolha++;
switch(escolha) {
case ESCOLHA_1:
  do {
printf("\n\n\n\n==Qual a combinação?==\n\n");
printf("\n1.Homozigoto x Homozigoto\n");
printf("\n2.Homozigoto x Heterozigoto\n");
printf("\n3.Heterozigoto x Heterozigoto\n\n\n");
leituraLimpa(&escolha);
} while(status||(escolha+1)>4);

case ESCOLHA_2:
break;
  }
}
