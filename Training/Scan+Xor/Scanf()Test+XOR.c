#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int resp;

int clrbuffer (void) {
	if(scanf("%d",&resp)!=1||resp>=7) { 
	while ((resp=getchar())!='\n');
	resp=0;
	return resp;
	};
	return resp;
}
int p(int a) {
if(a==1) {return 1;};
return 0;
}
int q(int b) {
if(b<=6&&b>=4) {return 1;};
return 0;
}

int main(void) {
int perg1,perg2,h,m;
do {
printf("\n==Homem ou Mulher?==\n");
printf("\n0.Sair\n");
printf("\n1.Homem\n");
printf("\n2.Mulher?\n");
perg1=clrbuffer();
if(perg1==0) {break;}
printf("\n==Do que voce gosta==\n");
printf("\n0.Sair\n");
printf("\n1.Carro\n");
printf("\n2.Motocross\n");
printf("\n3.Caminhao\n");
printf("\n4.Patins\n");
printf("\n5.Patinete\n");
printf("\n6.Motonete\n");
if(perg2==0) {break;}
perg2=clrbuffer();
h=p(perg1)?1:0;
m=q(perg2)?1:0;
if((perg1!=0)&&(perg2!=0)) {
	if(h&&m) printf("\nHOMEM AFEMINADO\n");
	if(!h&&!m) printf("\nMULHER MACHO\n");
	if(!h&&m) printf("\nMULHER\n");
	if(h&&!m) printf("\nHOMEM\n");
    }
  } while((perg1!=0)&&(perg2!=0));
}
