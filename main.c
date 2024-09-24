#include <stdio.h>
#include <string.h>

int main(void) {
  char palavraSecreta[20];
  sprintf(palavraSecreta, "MELANCIA");

  int acertou = 0;
  int enforcou = 0;
  int numeroDeletras = strlen(palavraSecreta);

  do{
    //Incluindo o jogo
    printf("Digite uma letra:");
    char chute;
    scanf("%c", &chute);
    int i = 0 ;
    for(i = 0; i < numeroDeletras; i++){
      if(palavraSecreta[i] == chute){
        printf("A posição %d tem essa letra\n", i);
      }
    }
  }while (!acertou && !enforcou);
  return 0;
}