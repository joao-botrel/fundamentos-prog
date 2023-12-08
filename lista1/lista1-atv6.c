#include <stdio.h>

// Esse programa lê um número inteiro (maior que 2) e imprime um triângulo retângulo 


int main(void) {

   int i, j, k;
  
 printf("Escreva um número maior que 2: ");
  scanf("%i", &k);

  for (j = 1; j<= k; j++){
    for (i=1; i <= j; i++)
      printf("*");
    printf("\n");
  }



  
  return 0;
}