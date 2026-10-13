#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
int a = 10;
int *b = &a;
int c = *b;
printf("\n%d\n",a);
printf("\n%d\n",*b);
printf("\n%d\n",c);

}
