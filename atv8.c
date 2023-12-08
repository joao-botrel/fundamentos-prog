#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int M[2][2];
  int R[2][2];
  int maior;

  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 1; j++) {
      system("clear");
      printf("Escreva o numero da posição (%d,%d):", i, j);
      scanf("%d", &M[i][j]);
    }
    system("clear");
  }
  maior = M[0][0];
  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 1; j++) {
      if (maior < M[i][j]) {
        maior = M[i][j];
      }
    }
  }
  for (int i = 0; i <= 1; i++) {
    for (int j = 0; j <= 1; j++) {
      R[i][j] = maior * M[i][j];
    }
  }
  printf("\nMatriz M");
  for (int i = 0; i <= 1; i++) {
    printf("\n");
    for (int j = 0; j <= 1; j++) {
      printf("| %d |", M[i][j]);
    }
  }
  printf("\n\nMatriz R");
  for (int i = 0; i <= 1; i++) {
    printf("\n");
    for (int j = 0; j <= 1; j++) {
      printf("| %d |", R[i][j]);
    }
  }
  return 0;
}