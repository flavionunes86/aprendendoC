#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "");

int i = 5;
int *j;
j = &i;
i = i + 1;


printf("Conteudo da variavel comum i: %i\n", i);
printf("Conteudo da variavel apontada por j: %i\n", *j);
printf("Endereco da variavel comum i: %p\n", &i);
printf("Endereco da variavel ponteiro j: %p\n", &j);

return 0;


}