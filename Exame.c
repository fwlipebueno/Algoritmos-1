#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Exame.c
@author: Felipe Almeida
@date: 15 Dez 21
@brief: Exame

1) (Valor: 30 pontos) Com as férias chegando, você decidiu deixar sua vida
sedentária de Gamer e vai começar a fazer exercícios físicos.
Para isso vai fazer um programa para saber seu condicionamento atual.

Faça um programa que exiba um menu com as seguintes opções:
Menu de programa:
a) Cálculo do VO2max
b) Nivel de aptidao Física
c) Sair do programa

a) Ao selecionar a opção A o programa deve receber a frequência cardíaca em
repouso(FCrep) e a frequência cardíaca máxima (FCmax) e calcular a área
utilizando uma função chamada calculaVo2, que recebe os dois valores de
frequencia e retorna o valor do VO2. Em seguida exiba o valor retornado pela
função com 2 casas decimais

VO2max = 15 X (FCmaxrep/FCrep)
b) Ao selecionar a opção B o programa deve receber do usuário via teclado
o valor do VO2max.
Esse valor deve ser passado por parâmetro para a função classificaVO2 que
recebe o VO2Max e exibe na tela o nível de aptidão física utilizando a seguinte
regra:


Muito Fraca - VO2max inferior a 25

Fraca - VO2max intervalo [25 a 33[ (intervalo fechado em 25 e aberto em 33)
Regular - VO2max intervalo [33 a 42[
Boa - VO2max intervalo [42 a 53[
Excelente - VO2max igual ou superior a 53
c) Sai do programa

Regras para o menu:
Deve ser repetido até o usuário escolher a opção sair.
Deve ser feito com switch e aceitar letras maiúsculas e minúsculas.
Tratar o caso de opção inválida.
*/
int main(){ //(não deu tempo)
float calculo
do {
	print("\n---------------------------------------------------");
	print("\n                   Menu Principal");
	print("\n---------------------------------------------------");
	print("\n1 - Cálculo do VO2max");
	print("\n2 - Nivel de aptidão Física");
	print("\n3 - Sair do programa");
	print("\n---------------------------------------------------\n");
	$op = trim(fgets(STDIN));

	switch ($op){
		case 0:
		break;
		case 1:  calculo();
		break;
		case 2: imprimeap();
                imprimerpn();
                imprimerpf();
		break;
		case 3: print("FIM!!!");
		break;
		default: print("Opcão Inválida!!!");
		break;
	}//switch
}//do
while ($op != 0);

return 0;
}//main





/*
(Valor 30 pontos) Utilizando estruturas de repetição,

a) Faça um programa que leia e armazene uma matriz de valores reais 5x5 a
partir do teclado e armazene na  matrizA. Somente deverão ser aceitos valores
entre 10 e 50 (inclusive).
Em seguida exiba os valores da matrizA em formato tabular alinhado).

b) Crie e preencha uma matrizB a partir dos elementos da matrizA obedecendo a
seguinte regra:

    Se a célula estiver nas diagonais (principal e secundária) da matriz,
     o seu valor deve ser copiado multiplicado por 2.
    Caso contrário o seu valor deve ser copiado dividindo por 3.

Em seguida exiba os valores da matrizB em formato tabular alinhado;

c) Utilizando estruturas de repetição, calcule e exiba a média de todos os
elementos pares da coluna linha da matrizA
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  int matrizA[5][5];
  float matrizB[5][5];
  float media = 0;
  int contador = 0;

  // Parte A

  printf("Insira 25 numeros na matriz entre 10 e 50 (inclusive):\n");
  for (int l = 0; l < 5; l++) {
    for (int c = 0; c < 5; c++) {
      scanf("%d", &matrizA[l][c]);
      if (matrizA[l][c] < 10 || matrizA[l][c] > 50)
        printf("Insira novamente o numero\n");
    }//for interno
  }//for externo


  // Parte B

  for (int l = 0; l < 5; l++) {
    for (int c = 0; c < 5; c++) {
      if (l == c || l + c == 4) {
        matrizB[l][c] = (float)matrizA[l][c] * 2;
      }//if
      else {
        matrizB[l][c] = (float)matrizA[l][c] / 3;
      }//else
    }//for interno
  }//for externo

  printf("\n\n");
  for (int l = 0; l < 5; l++) {
    for (int c = 0; c < 5; c++) {
    printf("%.2f ", matrizB[l][c]);
    }//for interno
    printf("\n");
  }//for externo


  // Parte C

  printf("\n\n");
  for (int l = 0; l < 5; l++) {
    for (int c = 0; c < 5; c++) {
      if (matrizA[l][c] % 2 == 0) {
        media = media + matrizA[l][c];
        contador++;
      }//if
    }//for interno
  }// for externo

  media = media / contador;

  printf("\n\nA media dos elementos pares da matrizA: %.2f\n\n", media);

  return 0;
}//main



/*
(Valor: 40 pontos) Faça um programa que:
a) Receba e armazene 6 nomes de corredores (tamanho máximo: 30 caracteres),
somente deverão ser aceitos nomes de corredores com mais de 4 caracteres,
solicitando uma nova entrada caso necessário.

b) Buscar se um nome digitado está na lista ou não;

c) Acrescentar o texto " Bolt" ao final de cada nome. Exemplo: "Usain"
   é transformado em "Usain Bolt";

d) Listar todos os corredores que começam com vogais em uma tabela alinhada à
esquerda com  colunas separadas por | (barra vertical);
| Alessandro           |
| Eduardo Bolt         |
| Usain Bolt           |

e) Exibir o nome de um corredor com a maior quantidade de letras. Caso haja
empate
   exiba todos os nomes com a maior quantidade;
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

  char corredores[6][30];
  char busca[30];
  char aux[30];
  int letras;
  int auxi = 0;

  //Parte A

  for(int i = 0; i < 6; i++) {
    printf("Digite o nome do corredor: ");
    fgets(corredores[i], 30, stdin);
    corredores[i][strcspn(corredores[i], "\n")] = '\0';
    setbuf(stdin, NULL);

    if (strlen(corredores[i]) < 4) {
      printf("Digite o nome de um corredor com mais de quatro letras: ");
      fgets(corredores[i], 30, stdin);
      corredores[i][strcspn(corredores[i], "\n")] = '\0';
      setbuf(stdin, NULL);
    }// if
  }// for

  // Parte B

  printf("\n\nInsira um nome para verificar se esta na lista!\n");
  fgets(busca, 30, stdin);
  busca[strcspn(busca, "\n")] = '\0';
  setbuf(stdin, NULL);
  for(int i = 0; i < 6; i++) {
    if (strcmp(corredores[i], busca) == 0)
    auxi = 1;
  }//for

  if (auxi == 1) {
    printf("\nO nome digitado esta na lista!\n");
  } else {
    printf("\nO nome digitado nao esta na lista!\n");
  }


  // Parte C

  for(int i = 0; i < 6; i++) {
    strcat(corredores[i], " Bolt");
  }


  // Parte D

 for(int i = 0; i < 6; i++) {
   if (corredores[i][0] == 'a' || corredores[i][0] == 'e' || corredores[i][0] == 'i' ||
       corredores[i][0] == 'o' || corredores[i][0] == 'u' || corredores[i][0] == 'A' ||
       corredores[i][0] == 'E' || corredores[i][0] == 'I' || corredores[i][0] == 'O' ||
       corredores[i][0] == 'U') {

         printf("\n\n  | %-30s|\n\n", corredores[i]);
       } //if
  } //for


  // Parte E

  letras = strlen(corredores[0]);
  for(int i = 0; i < 6; i++) {
    if (strlen(corredores[i]) > letras)
    strcpy(aux, corredores[i]);
  }//for
  printf("\n\nO nome do corredor com mais letras: %s\n\n", aux);

  return 0;
}//main
