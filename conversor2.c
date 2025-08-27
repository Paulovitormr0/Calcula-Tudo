#include <stdio.h>
#include <unistd.h>
int Base1 = 0;
int NBase1 = 200;
int Base2 = 0;
int Ncasas = 0;
int main(){
  for(Ncasas = 0; NBase1 != 0; Ncasas++){
    NBase1 = NBase1 / 10;
    printf("%d", Ncasas);
    sleep(2);
     

     
  }
  return 0;
}

