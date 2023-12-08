#include <stdio.h>




float salariof (float salarioatual, float percentual){
  float novosalario, aumento;
  printf("\n Salário atual: %.2f", salarioatual);
  printf("\nPercentual de aumento: %.2f", percentual);
  aumento = salarioatual*percentual;
  printf("\nAumento salarial: %.2f", aumento);
  novosalario = salarioatual + aumento;
  return novosalario;
  
}


int main(void) {
 float salario, percentualaumento, salariofinal;
  
  printf("Digite o seu salário: ");
  scanf("%f", &salario);
  if (salario >= 2000) {
    percentualaumento = 0.05;
    salariofinal = salariof(salario, percentualaumento);
  } else if ((salario > 1000) && (salario < 2000)) {
    percentualaumento = 0.1;
    salariofinal = salariof(salario, percentualaumento);
  } else if (salario <= 1000) {
    percentualaumento = 0.15;
    salariofinal = salariof(salario, percentualaumento);
  }

  printf("\nO seu salario final é de: %.2f", salariofinal);

 

  
  return 0;
}