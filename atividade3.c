#include <stdio.h>

int main(void) {

  float valor1, valordolar, valoralemao, valorlibra;
  printf("Digite o valor que voce possui para sua viagem em reais: ");
  scanf("%f", &valor1);

  valordolar = valor1 / 1.8;
  valoralemao = valor1 / 2;
  valorlibra = valor1 / 3.57;

  printf("O valor convertido da sua moeda em dolar e: %.2f\n", valordolar);
  printf("O valor convertido da sua moeda em marco alemao: %.2f\n", valoralemao);
  printf("O valor convertido da sua moeda em libra esterlina e: %.2f\n", valorlibra);

  return 0;
}