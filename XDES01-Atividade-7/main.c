#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"


int main(void) {
int numvoo[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
char *origemvoo[12][20] = {"CAMPINAS", "MANAUS", "SAOPAULO", "CURITIBA", "UBERLANDIA", "NITEROI", "VITORIA", "NATAL", "BRASILIA", "CUIABA", "BELEM", "PALMAS"};
char *destinovoo[12][20] = {"BERLIM", "TOQUIO", "ROMA", "LISBOA", "SEUL", "ROMA", "VIENA", "MOSCOU", "MADRID", "LONDRES", "DUBLIM", "BERNA"};
int lugares[12] = {42, 32, 28, 0, 43, 21, 0, 54, 30, 10, 19, 26};
int sair = 1;
int escolha1, escolha2;

do {
printf("--------------MENU-------------\n");
printf("Digite o número correspondente\n");
printf("com a opção que você deseja: \n");
printf("(1) Consulta\n");
printf("(2) Fazer reserva\n");
printf("(3) Sair");
printf("\n");

  scanf("%d", &escolha1);
  escolha1 = letramaiuscula(escolha1);
  switch (escolha1){
    case 1:
     do{
       system("clear");
       printf("--------------CONSULTA-------------\n");
       printf("Digite o número correspondente\n");
       printf("com a opção que você deseja: \n");
       printf("(4) Número do voo\n");
       printf("(5) Origem\n");
       printf("(6) Destino\n");
       printf("\n");
       scanf("%d", &escolha2);
       escolha2 = letramaiuscula(escolha2);
       consulta(numvoo, origemvoo, destinovoo, lugares, escolha2);
       printf("\nCaso queira continuar fazendo consultas, digite 2. Caso contrário digite 1.");
       printf("\n");
       scanf("%d", &sair);
       
     } while(sair!='1');
    break;
    case 2:
    do {
      reserva(numvoo, lugares);
       printf("\nCaso queira continuar fazendo reservas, digite 2. Caso contrário digite 1.");
      printf("\n");
       scanf("%d", &sair);
    } while(sair!=1);
    break;
    case 3:
    system("pause");
    default: 
    opcaoinvalida();
    break;
    
    
  }
  
  
} while(escolha1!=3);
  
  return 0;
}