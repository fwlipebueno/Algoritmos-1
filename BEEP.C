/**
 * @file marioBros.c
 * @author Muriel de Souza Godoi
 * @date 03 Apr 2019
 * @brief Toca a musica do Mário com beeps
 * Depende da biblioteca sox
 * Roda apenas no Linux
 */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * \brief Executa um Beep em uma frequencia durante um tempo
 *
 * \param fuency frequencia do beep em hz
 * \param time tempo em milisegundos
 *
 * Executa um Beep em uma frequencia durante um tempo
 */
 void Beep( float frequency, float time ){
  char comando[255];
  sprintf(comando, "play -nq -t alsa synth %f tri %f", time/1000, frequency);
  system(comando);
  //system("clear");
  return;
}// Beep

void Sleep(int time){
  usleep((time-100)*1000);
}// Sleep

int main() {
  printf("Hello World\n");
  while(1<2){
    Beep(250,100);
    Sleep(200);
    Beep(500,100);
  }

  return 0;
}// main
