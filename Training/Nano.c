#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
double notas[6];
printf("\n%ld\n",sizeof(notas));
printf("\n%ld\n",sizeof(notas[0]));
printf("\n%ld elementos\n",(sizeof(notas)/sizeof(notas[0])));

const char *classe[] = {"Tank", "Healer", "Dano"};
printf("\n%s\n",classe[1]);

}
