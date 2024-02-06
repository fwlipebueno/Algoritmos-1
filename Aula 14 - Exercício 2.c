#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 14 - Exercício 2.c
@author: Felipe Almeida
@date: 30 Nov 21
@brief: Exercício 2 da aula 14

Elabore uma função que receba por parâmetro o sexo (caractere) e a
altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso,
utilize as fórmulas a seguir.
 Para homens: (72.7 * altura) - 58
 Para mulheres: (62.1 * altura) - 44.7*/
float Peso_Ideal(char Sexo, float Altura){
  float Peso_Ideal;
  if (Sexo == 'M'){
      Peso_Ideal = (72.7 * Altura) - 58;
  } else{
      Peso_Ideal = (62.1 * Altura) - 44.7;
  }
  return Peso_Ideal;
}
int main(){
  char Sexo_Pessoa;
  float Altura_Pessoa;
  float Resultado_Peso_Ideal;

  printf("Insira seu sexo: (M = Masculino / F = Feminino): \n");
  scanf("%c", &Sexo_Pessoa);
  printf("Insira sua altura: \n");
  scanf("%f", &Altura_Pessoa);
  Resultado_Peso_Ideal = Peso_Ideal(Sexo_Pessoa, Altura_Pessoa);
  printf("Peso ideal: %.2f\n", Resultado_Peso_Ideal);

return 0;
}//main
