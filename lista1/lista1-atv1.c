#include <stdio.h>

int main(void) {
  float n1, n2, n3, maior, menor;
  printf("Digite 3 numeros: ");
  scanf("%f %f %f", &n1, &n2, &n3);

  

  if (n1 < n2) {
    if (n1 > n3) 
      menor = n3;
      else menor = n1;
    
  } else{
  if (n2 > n3)
    menor = n3;
   else menor = n2;
    
  }



  if (n1 > n2) {
    if (n1 > n3)
    maior = n1;
    else maior = n3;
  } else {
    if (n2 > n3)
      maior = n2;
    else maior = n3;
  }

  printf("O maior numero eh: %.2f \n", maior);
  printf("O menor numero eh: %.2f \n", menor);

  return 0;
}