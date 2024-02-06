#include <stdio.h>
#include <stdlib.h>

int main(void){
  printf("Felipe de Almeida Bueno\n");
  printf("felipe.2003@alunos.utfpr.edu.br\n");
printf("press F + enter ---> respect\n");
char x[10];

int i = 0;
while ((x[i] = getchar()) != '\n' && i < 8) {//o ciclo continua executando
}//ao mesmo tempo que satisafaz a condição de i
  ++i;

  x[++i] = '\0';

  printf("%s\n", x);
  printf("Gabriel Reis Macedo\n");
  printf("gabrielreismacedo@alunos.utfpr.edu.br\n");

  return 0;
}//main
