#include <stdio.h>
#include <unistd.h>

int dividendo = 0;
int divisor = 0;
int quociente = 1;
int resto[35] = {0};
int resultado = 0;
int tamanhoresto = 0; 
int opcao = 0;
int temp =  0;
int size = sizeof(resto) / sizeof(resto[0]);

int Potencia(void){
    double NumeroAux = 0;
    double Numero = 0;
    double Elevado = 0;
    double Resultado = 0;
    int i = 0;
    printf("Base:");
    scanf("%lf", &Numero);
    printf("Potencia:");
    scanf("%lf", &Elevado);

    for(i = 1;i < Elevado; i++ ){
        if(NumeroAux==0){
            NumeroAux = Numero;
        }
       NumeroAux = NumeroAux*Numero;
       Resultado = NumeroAux;
    }
    printf("Seu resultado é: %lf", Resultado);
}

void Conversorbase10(void){

    printf("Base de Destino:");
    scanf("%d", &divisor);
    printf("Numero na base 10:");
    scanf("%d", &dividendo);

    while(dividendo != 0){
    quociente = dividendo/divisor;
    resto[tamanhoresto] = dividendo % divisor;
    dividendo = quociente;
    printf("quociente = %d\n", quociente);
    printf("Dividendo = %d\n", dividendo);
    printf("Divisor = %d\n", divisor);
    
  for (int i = 0; i < size; i++) {
        printf("%d", resto[i]);
    }
    printf("\n");
    tamanhoresto++;
    if(quociente == 0){
    for(int i = 0; i < (tamanhoresto / 2); i++ ){
        temp = resto[i];
        resto[i] = resto[tamanhoresto -i - 1];
        resto[tamanhoresto -i - 1] = temp;
        }

        printf("seu resultado é: ");
    for (int i = 0; i < size; i++) {
        printf("%d", resto[i]);
    }
    }

}

}
int main(void){

    printf("escolha uma opção:\n 1) Conversão para base 10\n");
    printf("escolha uma opção:\n 2) Potenciação\n");
    scanf("%d", &opcao);

    if (opcao == 1){
        Conversorbase10();
    }
    if (opcao == 2){
        Potencia();
    }
return(0);
}