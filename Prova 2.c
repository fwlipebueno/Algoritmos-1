#include <stdio.h>
#include <stdlib.h>
#include <string.h>/*
@file: Prova 2.c
@author: Felipe Almeida
@date: 08 Dez 21
@brief: Prova Final

Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS)
pararam de funcionar. Com isso, diversos serviços ficaram indisponíveis.
Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends,
Valorant e Wild Rift.

Você foi convocado em uma missão de emergência para ajudar a identificar
os locais das falhas e reestabelecer os serviços.
Para isso, faça um programa que armazene os dados de 5 cidades onde estão
localizados os servidores com problemas, cada cidade possui:
nome (20 caracteres), quantidade de servidores ativos(inteiro),
quantidade de servidores com problemas (inteiro) e quantidade total de
servidores(inteiro).

Para isso, faça:

a)Faça um programa que receba os dados das 5 cidades:
nome(strings), a quantidade de servidores ativos e a quantidade de servidores
com falha ( salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
Os valores não podem ser negativos, solicite novos valores enquanto o usuário
digite valores inválidos.

b)Utilizando estruturas de repetição, calcule a quantidade total de servidores
em cada cidade e salve na última coluna da matriz;

c)Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes,
as 3 quantidades de servidores de todos as cidades.

d)Receba um nome de uma cidade e busque ela na lista,
todos os dados de seus servidores (apenas 1 vez).
Exiba uma mensagem informando também caso não encontre o nome buscado.

e)Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual
de servidores com problemas (duas casas decimais).

f)Utilizando estrutura de repetição, calcule e exiba o percentual total de
servidores ativos e de servidores com problemas.

g)Acrescente o texto "Defeated" ao final da string do nome todas as cidades que
têm o número de servidores com problemas maiores que os servidores ativos.
Em seguida exiba o nome de todas as cidades (alteradas ou não).
Ex: "São Paulo" -> "São Paulo Defeated"

Obs.:

Os itens devem ser executados sequencialmente (Não é um menu);
Para obtenção da nota máxima, faça cada item, de A a G, em uma função separada.
Não utilize variáveis globais.
Sempre que possível, utilize estruturas de repetição;
Bônus do Professor:

Por estar se esforçando e cursando uma universidade em um ano de pandemia,
você acumulou Influence Points (IP) com o professor.
Com isso, você ganhou o bônus de escolher, obrigatoriamente, um dos itens de "C"
a "G" para ser eliminado da questão.
Indique o item eliminado com um comentário em seu código
*/
int programa(){
   char name[5][20];
   int ServidoresAtivos[], ServidoresFalhos;
   int MatrizApuracao[5][3];
   /*Faça um programa que receba os dados das 5 cidades:
   nome(strings), a quantidade de servidores ativos e a quantidade de servidores
   com falha ( salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
   Os valores não podem ser negativos, solicite novos valores enquanto o usuário
   digite valores inválidos.
   */
  for(int i = 0; i < 5, i++){
      printf("Cidade: %i ", i+1);
      fgets(name[i], 20, stdin);
      name[i][strcspn(name[i], "\n")] = '\0';
      fflush(stdin);
      printf("Insira o número de servidores ativos, por obséquio: ");
      scanf("%d", &ServidoresAtivos);
      printf("Insira o número de servidores falhos, por obséquio: ");
      scanf("%d", &ServidoresFalhos);
      for(int a = 0; a < 5){
          MatrizApuracao[a][1] = ServidoresAtivos;
          MatrizApuracao[a][2] = ServidoresFalhos;
      }//for2
  }//for
  return 0;
}//int - program

int ServidoresResult(int ServidoresAtivos, int ServidoresFalhos, int MatrizApuracao){
    int ServidoresResult;
    /*Utilizando estruturas de repetição, calcule a quantidade total de servidores
    em cada cidade e salve na última coluna da matriz;
    */
    for(int b = 0; b < 5; b++){
        ServidoresResult = ServidoresFalhos + servidoresAtivos;
        MatrizApuracao[b][3] = ServidoresResult;
    }//for3
    return 0;
}//int - ServidoresResult

int BuscaNaLista(char name){
    char NomeBusca[20];
    /*Receba um nome de uma cidade e busque ela na lista,
    todos os dados de seus servidores (apenas 1 vez).
    Exiba uma mensagem informando também caso não encontre o nome buscado.
    */
    fgets(NomeBusca, 20, stdin);
    NomeBusca[strcspn(NomeBusca, "\n")] = '\0';
    printf("Insira o nome da cidade que deseja buscar, por obséquio: ");
    scanf("%d", &NomeBusca);
    fflush(stdin);
    for(int i = 0, i < 5, i++){
         if(strcmp(NomeBusca, name[][])){
         }//if
    }//for4
}
    return 0;
}//int - BuscaNaLista

if((strcmp(NomeBusca, name[indice])) == 0){
     printf("ServidoresAtivos = %d\n", MatrizApuracao[indice][0]);
     printf("ServidoresFalhos = %d\n", MatrizApuracao[indice][1]);
     printf("Total de servidores = %d\n", MatrizApuracao[indice][2]);
   } else {
     printf("Nome da cidade não encontrado, tente novamente!\n");
   }
}//else

void programaE(char nome[5][20], int MatrizApuracao[5][3]) {
 int indice;
 float porcentual = 0;
 float maior = 0;
 /*Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual
 de servidores com problemas (duas casas decimais).
 */
 for (int i = 0; i < 5; i++) {
   porcentual = (MatrizApuracao[i][1] / MatrizApuracao[i][2]) * 100;
   if(porcentual > maior){
     maior = porcentual;
     indice = i;
   }//if
 }

 printf("Nome = %s e Porcentual = %.2f\n", name[indice], maior);
}


void programaF(int MatrizApuracao[5][3]) {

 float totalAtivos = 0;
 float totalCaidos = 0;
 float totalServers = 0;
 float porcentualAtivos = 0;
 float porcentualCaidos = 0;
 /*Utilizando estrutura de repetição, calcule e exiba o percentual total de
 servidores ativos e de servidores com problemas.
 */
 for (int i = 0; i < 5; i++) {
   totalAtivos = MatrizApuracao[i][0] + totalAtivos;
   totalCaidos = MatrizApuracao[i][2] + totalCaidos;
   ServidoresResult = MatrizApuracao[i][3] + ServidoresResult;

   porcentualAtivos = (totalAtivos / ServidoresResult) * 100;
   porcentualCaidos = (totalCaidos / ServidoresResult) * 100;
 }

 printf("Percentual total de servidores Ativos = %.2f\n", porcentualAtivos);
 printf("Percentual total de servidores Falhos = %.2f\n", porcentualCaidos);

}

void programaG(char name[5][20], int MatrizApuracao[5][3]) {

 for (int i = 0; i < 5; i++){
   if (MatrizApuracao[i][1] > MatrizApuracao[i][0]) {
     strcat(name[i], " Defeated");
     /*Acrescente o texto "Defeated" ao final da string do nome todas as cidades que
     têm o número de servidores com problemas maiores que os servidores ativos.
     Em seguida exiba o nome de todas as cidades (alteradas ou não).
     Ex: "São Paulo" -> "São Paulo Defeated"
     */
   }//if
 }//for

 printf("Nomes das cidades\n\n");
 for (int i = 0; i < 5; i++) {
   printf("%s\n", name[i]);

 }//for

}

int main(){
   char name[5][20];
   int ServidoresFalhos, ServidoresResult, ServidoresAtivos, MatrizApuracao[5][3];
   programa(&ServidoresFalhos, &ServidoresAtivos, &MatrizApuracao, &name);
   programaE(name, MatrizApuracao);
   programaF(MatrizApuracao);
   programaG(name, MatrizApuracao);

}//main
return 0;
