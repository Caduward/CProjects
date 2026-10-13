#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int resp;

int clrbuffer (void) {
	if(scanf("%d",&resp)!=1||resp>=7) { 
	while ((resp=getchar())!='\n');
	resp=0;
	return resp;
	};
	return resp;
}
int banana(int a,int b) {
if(a==1&&(b<=3&&b>=1)) {return 1;};
return 0;
}
int massan(int a,int b) {
if(a==2&&(b<=6&&b>=4)) {return 1;};
return 0;
}

int main(void) {
int perg1,perg2;
do {
printf("\n==Homem ou Mulher?==\n");
printf("\n0.Sair\n");
printf("\n1.Homem==\n");
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
perg2=clrbuffer();


  } while((perg1!=0)&&(perg2!=0));
}
/* int viado(void) {
	
}
int homem(void) {
	
}*/
