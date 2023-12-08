#include <stdio.h>

//Esse programa vai exibir os resultados das potências de 1 a 10 de um certo número x, e exibir os resultados das potências de 10 com expoente de 0 a x


int main(void) {
   int x, h=1, dez=1;
  printf("Digite um número inteiro positivo: ");
  scanf("%d", &x);
  printf("01");
  for (int y=2; y <=11; y++){
    h*=x;
    printf("\n%.2d\n", h);
  }

  x++;
  printf("\n01");
for (int z=2; z <=x; z++){
  dez=10*dez;
  printf("\n%.2d\n", dez);
}
  
  
  return 0;
}