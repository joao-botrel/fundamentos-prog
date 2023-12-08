#include <stdio.h>

// O programa calcula recebe quatro notas de um aluno, calcula e mostra média
// aritmética das notas e a msg de aprovado ou reprovado, sendo aprovação a
// media 6

int main(void) {
  float nota1, nota2, nota3, nota4, notafinal;
  printf("Digite as suas 4 notas: ");
  scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
  notafinal = (nota1 + nota2 + nota3 + nota4)/4;
  if (notafinal >= 6){
  printf("Parabéns, você foi aprovado! Sua nota final foi: %f\n", notafinal);
    } else printf("Você foi reprovado. Sua nota final foi: %f", notafinal);  

  return 0;
}