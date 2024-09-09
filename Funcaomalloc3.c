#include <stdio.h>
#include <stdlib.h>

int main () {
  char*p;
  //aloca espaco para 1.000 chars
  p = (char *) malloc(1000);
  int *p;
  //aloca espaco para 250 inteiros
  p = (int *) malloc(1000);
  system("pause");
  return 0;
}


//No momento da alocacao da memoria, deve-se levar em conta o tamanho do dado alocado. Alocar 1.000 bytes de memoria equivale
//um numero de elementos diferente, dependendo do tipo de elemento:
//Bytes para char: um array de 1.000 posicoes de caracteres
//Bytes para int: um array de 250 posicoes de inteiros.