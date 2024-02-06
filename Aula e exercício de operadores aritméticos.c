#include <stdio.h>
#include <stdlib.h>

int main(){
  int a = 10;
  int b = 3;
  float resultado;
  resultado = (float)a / b;//casting
  printf("Resultado: %.3f\n", resultado);

  int contador = 100;
  printf("Contador: %i\n", contador);
  contador = contador - 1;
  printf("Contador: %i\n", contador);
  contador++;//função incremento
  printf("Contador: %i\n", contador);
  contador = contador + 1;
  printf("Contador: %i\n", contador);
  contador--;//função decremento
  printf("Contador: %i\n", contador);

  printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

  int contator = 200;
  int saida;

  saida = ++contator;//pré incremento (e pós)

  printf("Contator: %i\n", contator);
  printf("Saida: %i\n", saida);

    printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

  int result;

  result = 3 + 5 * 8;
  result = result + (3 + 5) * 8;
  printf("Result: %i\n", result);


  return 0;
}//main
