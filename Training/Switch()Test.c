#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
int opcao;
  do {
    printf("==SELECAO DE CALCULO MODULAR==\n");
    printf("\n O que deseja calcular?\n");
    printf("\n 0.Dejsa SAIR\n");
    printf("\n 1.Velocidade Media\n");
    printf("\n 2.Area da circunferencia\n");
    scanf("%d",&opcao);
    switch(opcao) {
	  case 0:
	    printf("Saindo..\n");
	    break;
	  case 1:
	  float dD,dT,VM;
	    printf("\n Qual a distancia percorrida? (KM)\n");
	    scanf("%f",&dD);
	    printf("\n Em quanto tempo? (horas)\n");
		scanf("%f",&dT);
		VM = dD/dT;
		printf("\n Viajou a %.1f KM/h\n",VM);
		printf("\n \n");
		break;
      case 2:
      float A,Pi=3.14,r;
        printf("\n Qual o tamanho do raio?\n");
        scanf("%f",&r);
        A=(r*r)*Pi;
        printf("\n A area é %.1f (cm, provavelmente)\n",A);
        printf("\n \n");
        break;
      default:
      printf("\n Resposta invalida\n\n");
      
      break;
		}
  } while(opcao);
   	return 0;
}

