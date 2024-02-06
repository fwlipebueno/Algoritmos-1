#include <stdio.h>
#include <stdlib.h>/*
@file: Aula 14 - Exercício 3.c
@author: Felipe Almeida
@date: 30 Nov 21
@brief: Exercício 3 da aula 14

Escreva um procedimento que recebe por parâmetro as 3 notas de um
aluno e uma letra. Se a letra for A, o procedimento calcula a média
aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3
e 2) e se for S, a soma das notas. O valor calculado também deve ser
retornado e exibido na função main.*/
float Media(int *nota, char letra){
    float media;
    int i;

  if (letra == 'A'){
      for (i = 0; i < 3; i++){
          media = media + nota[i];
      }//for
      media = media / 3;
 }//if
  else if (letra == 'P'){
     media = (nota[0] * 5 + nota[1] * 3 + nota[2] * 2) / (5 + 2 + 3);
 }//if2
 else{
     for (i = 0; i < 3; i++){
         media = media + nota[i];
     }//for2
   }//else
    return media;
}//float
int main(){
    int Nota_Aluno[3];
    char letra;
    float Retorno_Media;
    printf("Digite 3 notas:\n");
    for (int i = 0; i < 3; i++){
        scanf("%i", &notaAluno[i]);
    }//for3
    setbuf(stdin,NULL);
    printf("Insira A (média aritimética), P (média ponderada) ou S (soma):\n");
    scanf("%c", &letra);
    Retorno_Media = Media(Nota_Aluno, letra);
    printf("Média: %.2f", Retorno_Media);

return 0;
}//main
