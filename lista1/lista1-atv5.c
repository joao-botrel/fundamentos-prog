#include <stdio.h>

int main(void) 
{
  int x, maior, menor;
  
  printf("\nDigite numeros inteiros: ");
  scanf("%d",&x);
  maior = x;
  menor = x;
  do
  { 
  scanf("%d",&x);
  if(x>maior)
    maior = x;
  if(x<menor&&x>=0)
    menor = x;

  } while (x>=0);
  printf("Maior: %d\nMenor: %d",maior,menor);

  return 0;
}