#include <stdio.h>

// Este programa imprime os números de 1 até 20, de 20 até 1 e os ímpares entre eles

int main(void) {
  int contador = 1;
  int impar=1, contador2 = 20;

  while (contador <= 20) {
    printf("%i\n", contador);
    ++contador;
  }

  while (contador2 <= 20 && contador2 >= 1) {
    printf("%i\n", contador2);
    contador2 = contador2 - 1;
  }

  while (impar >=1 && impar < 20){
    printf("%i\n", impar);
    impar = impar + 2;
  }
  
  return 0;
}