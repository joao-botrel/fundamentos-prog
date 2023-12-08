#include <stdio.h>

int main(void) {
  float salario, aumento, valoraumento, novosalario;
  printf("Digite o valor do seu salario: ");
  scanf("%f", &salario);
  printf("Digite o percentual do seu aumento: ");
  scanf("%f", &aumento);
  valoraumento = (aumento/100 + 1)/100 * salario;
  novosalario = salario + valoraumento;
  printf("O valor do seu aumento foi de: %.2f\n", valoraumento);
  printf("Seu novo salário é: %.2f", novosalario);

  return 0;
}