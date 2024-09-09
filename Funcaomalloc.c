#include <stdio.h>
#include <stdlib.h>
int main () {
  int *p;
  p = (int *) malloc(5*sizeof(int));
  int i;
  for (i=0; i<5; i++) {
       printf("Digite o valor da posicao %d: ", i);
       scanf("%d", &p[i]);
  }
    system("pause");
    return 0;
}


//estamos alocando um array contendo cinco posicoes de inteiros: 5*sizeof(int);
//a funcao sizeof(int) retorna 4 (numeros de bytes do tipo int na memoria).
//portanto, sao alocados 20 bytes (5 * 4bytes);
//a funcao malloc() retorna um ponteiro generico, o qual e convertido no tipo de ponteiro via type cast: (int*);
//o ponteiro p passa a ser tratado como um array: p[i].