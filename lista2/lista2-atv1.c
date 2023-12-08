#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
 int V[9];
  int divisores;
  
 for (int i=0; i<9; i++){
   printf("Digite V[%d]: ", i);
   scanf("%d", &V[i]);
 }
  for (int i=0; i<9; i++){
    divisores=0;
    for (int j=1; j<=V[i]; j++){
      if (V[i] % j ==0){
        divisores++;
      }
    }
    if (divisores <= 2){
   printf("V[%d]: %d\n", i, V[i]);
 }  
  }
 

  
  return 0;
}