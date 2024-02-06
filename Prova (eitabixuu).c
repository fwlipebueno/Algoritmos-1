#include <stdio.h>
#include <stdlib.h>
#include <math.h>/*
@file: Primeira prova.c
@author: Felipe Almeida
@date: 03 Nov 2021
@brief: Prova
Exiba uma única vez, um menu (5 pontos) com duas opções:
a) Verifica nível (Tier)
b) Calculo do taxa de vitórias (winrate)

E peça a opção desejada ao usuário

a) (10 pontos) Na primeira opção, o programa deve receber a pontuação do MMR e
informar em qual nível do jogador seguindo a seguinte lógica:
Nível Bronze: MMR abaixo de 1090
Nível Prata: MMR de 1090 a 1409
Nível Ouro: MMR de 1410 a 1719
Nível Platina: MMR de 1720 a 2019
Nível Diamante: MMR de 2020 a 2500
Nível Desafiante: MMR acima de 2500


(Exemplo de execução da opção A do menu:
Você escolheu Verificar Tier -

Digite a sua pontuação (MMR):1900
Você deverá jogar na Tier Platina!
Final do programa!)


b) (15 pontos) Na segunda opção, o programa deve receber o resultado de várias
partidas por meio da letra V para indicar vitória e D para derrota. A cada
entrada o sistema deve exibir a taxa de vitórias (winrate) com uma casa decimal,
que é o porcentual de vitórias considerando todas as partidas recebidas até o
momento, e em seguida deve solicitar uma nova entrada. O sistema finalizar ao
receber a letra F, situação na qual deve exibir:
O total de partidas, total de vitórias, total de derrotas e o winrate final.

Fórmula do Winrate: winrate == vitórias/vitórias + derrotas * 100
Exemplo de execução da opção B do menu:

Você escolheu Cálculo de Winrate

Digite o resultado da partida (V/D):V
Seu Winrate é de 100,0%
Digite o resultado da partida (V/D):V
Seu Winrate é de 100,0%
Digite o resultado da partida (V/D):D
Seu Winrate é de 66,6%
Digite o resultado da partida (V/D):D
Seu Winrate é de 50,0%
Digite o resultado da partida (V/D):S
Valor inválido!
Digite o resultado da partida (V/D):V
Seu Winrate é de 60,0%
Digite o resultado da partida (V/D):F
Total de Partidas: 5
Total de Vitórias: 3
Total de Derrotas: 2
Winrate Final: 60%
Final do programa!


Observações:


    Seu programa deve fazer a seleção das opções de entrada aceitando letras
    maiúsculas e minúsculas e usando a estrutura de seleção adequada.
    Seu programa deve tratar o caso do usuário digitar uma opção inválida,
    no menu e nos itens. Retornando mensagem de erro.
    O menu deve ser exibido e executado apenas uma vez.


*/
char opcao = 'a', resultadoPartida = 'V';
int mmr = 0, totalVitorias = 0, totalDerrotas = 0, totalPartidas = 0;
float winRate = 0;


int main()
{
    printf("Seja bem vindo ao sistema League of Legends\n");
    printf("Menu de programa:\na -Verifica nível (Tier)\nb - Cálculo do taxa de vitórias (winrate)\n");
    scanf("%c", &opcao);

    switch(opcao) {
    case 'a':
        printf("Você escolheu a verificação de nível!\nPortanto, digite seu MMR: ");
        scanf("%i", &mmr);
        if (mmr < 1090){
            printf("Você deverá jogar na Tier Bronze.\n");
        } else if (mmr >= 1090 && mmr <= 1409)
        {
            printf("Você deverá jogar na Tier Prata.\n");
        } else if (mmr >= 1410 && mmr <= 1719)
        {
            printf("Você deverá jogar na Tier Ouro.\n");
        } else if (mmr >= 1720 && mmr <= 2019)
        {
            printf("Você deverá jogar na Tier Platina.\n");
        } else if (mmr >= 2020 && mmr <= 2500)
        {
            printf("Você deverá jogar na Tier Diamante.\n");
        } else if (mmr > 2500)
        {
            printf("Você deverá jogar na Tier Desafiante.\n");
        }
        break;
    case 'b':
        printf("Cálculo da taxa de vitórias\n");
        do
        {
            printf("Digite o resultado da partida (V - Vitoria / D - Derrota):\n");
            scanf("%s", &resultadoPartida);
            if (resultadoPartida == 'V' || resultadoPartida == 'v')
            {
                totalVitorias++;
                totalPartidas = totalPartidas+1;
            } else if (resultadoPartida == 'D' || resultadoPartida == 'd')
            {
                totalDerrotas++;
                totalPartidas = totalPartidas+1;
            }
            winRate = ((float)totalVitorias / ((float)totalVitorias + totalDerrotas)) * 100;
            printf("Winrate: %.2f\n", winRate);
        } while (resultadoPartida == 'V' || resultadoPartida == 'D' || resultadoPartida == 'v' || resultadoPartida == 'd');
        printf("Total de partidas: %i\n", totalPartidas);
        printf("Total de vitorias: %i\n", totalVitorias);
        printf("Total de derrotas: %i\n", totalDerrotas);
        printf("Winrate final: %.2f\n", winRate);
        break;
    }//switch
    return 0;
}//main
