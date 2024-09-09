#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale (LC_ALL, "");

int var = 15;
int *ptr; 

ptr = &var;

printf("Conteudo de var: %d\n", var);
printf("Endereco de var: %p\n", &var);
printf("Conteudo apontado por ptr: %d\n", *ptr);
printf("Endereco apontado por ptr: %p\n",  ptr);
printf("Endereco do ptr          : %p\n", &ptr);

printf("\n\nEnd.");
while(1);

return 0;


}  //end main