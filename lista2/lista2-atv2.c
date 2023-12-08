#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numero[8];
  int p[8];
  int n[8];
  int positivos = 0;
  int negativos = 0;

  for (int i = 0; i < 8; i++) {
    printf("numero[%d]", i);
    scanf("%d", &numero[i]);
    if (numero[i] >= 0) {
      numero[i] = p[positivos];
      positivos++;

    } else if (numero[i] <= 0) {
      numero[i] = n[negativos];
      negativos++;
    }
  }

  
  if ((positivos=0)){
    printf("Não há números positivos.\n");
  } else {
    for (int i = 0; (i = positivos); i++){
      printf("Números positivos: %d\n", p[i]);
    }
  }

  if ((negativos = 0)){
    printf("Não há números negativos. \n");
  } else {
    for (int i = 0; (i = negativos); i++){
      printf("Números negativos: %d\n", n[i]);
    }
  }
  }
