#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Esse programa recebe dois numeros inteiros entre 0 e 10 e mostra a tabuada de
// 0 a 10 entre eles.

int main(void) {
  float numero1, numero2;
  printf("Digite os números entre 0 a 10 para visualizar a tabuada: ");
  scanf("%f %f", &numero1, &numero2);

  for (float i = numero1; i <= numero2; i++) {
    for (float x = 0; x <= 10; x++)
      printf("\n%.2f x %.2f = %.2f\n", i, x, i * x);
  }

  return 0;
}