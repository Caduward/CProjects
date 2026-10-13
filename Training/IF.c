#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
 int x,e;
 printf("Digite o numero\n");
 scanf("%d",&x);
 printf("\nElevado a quanto?\n");
 scanf("%d",&e);
 for(int c=2,y=x;c<=e;c++) {
	x = x*y;
 }
 printf("\n O resultado é:%d\n",x);
   	return 0;
}
