#include <stdio.h>
#include <unistd.h>
#include <string.h>

int Base1 = 0;
int Base1AUX = 0;
char NBase1 [20] = {0};
int NbaseAUX = 0;
int tamanhoarray = 0;
int Base2 = 0;
int Ncasas = 0;
int voltas = 0;

int main(){

  printf("Digite a base do primeiro numero:\n");
  scanf("%d", Base1);
  printf("Digite o primeirou numero\n");
  scanf("%s", NBase1);
  printf("Digite a base de destino\n");
  scanf("%d", Base2);

  for(Ncasas = 0; NBase1 != 0; Ncasas++){
    Ncasas = strlen(NBase1);
    NbaseAUX = NbaseAUX / 10;
    printf("%d", Ncasas);
    sleep(2);
     
  for(int a = 0; a == Ncasas; a++){
    if(Ncasas = 0){
      Base1 = 1;
    }else{
    Base1AUX = Base1*Base1;
    for(int i = 0; i < tamanhoarray; i++){
      while(voltas != tamanhoarray){
        Base1AUX = (Base1AUX*Base1AUX);
        voltas++;
      }
    }
    }
  }

  }
  return 0;
}

