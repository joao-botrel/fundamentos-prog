#include <stdio.h>


int main (void) {
   float horastrabalhadas, salariominimo, valorhora, salariobruto, imposto, salario;
  printf("Digite quantas horas voce trabalhou: ");
  scanf("%f", &horastrabalhadas);
  printf("Digite o valor do salario minimo: ");
  scanf("%f", &salariominimo);
  
   valorhora = (salariominimo/2)/24;
   salariobruto = horastrabalhadas*valorhora;
   imposto = (salariobruto*3)/100;
   salario = salariobruto - imposto;

  printf("O salario que voce deve receber deve ser: %.2f", salario);
    
  
return 0;
  
}