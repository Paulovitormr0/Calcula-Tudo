#include <stdio.h>
#include <unistd.h>
int Base1 = 0;
int Base1AUX = 0;
char NBase1 [20] = {0};
int NbaseAUX = 0;
int tamanhoarray = 0;
int Base2 = 0;
int Ncasas = 0;
int main(){

  printf("Digite a base do primeiro numero:");
  scanf("%d", Base1);
  printf("Digite o primeirou numero");
  scanf("%d", NBase1);
  printf("Digite a base de destino");
  scanf("%d", Base2);

  for(Ncasas = 0; NBase1 != 0; Ncasas++){
    NbaseAUX = NBase1;
    NbaseAUX = NbaseAUX / 10;
    printf("%d", Ncasas);
    sleep(2);
     
  for(i = 0; i == Ncasas; i++){
    if(Ncasas = 0){
      Base1 = 1;
    }else{
    Base1AUX = Base1*Base1;
    for (i = 0; i < tamanhoarray; i++){
       Base1AUX * 
    }
    }
  }

  }
  return 0;
}

