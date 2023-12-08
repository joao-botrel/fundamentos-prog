#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"


char letramaiuscula(char opcao) {
  opcao = toupper(opcao);
  return opcao;
}

void palavramaiusculo(char string[]) {
  int i = 0;
  while (string[i] != '\0') {
    string[i] = toupper(string[i]);
    i++;
  }
  string[i] = '\0';
}

void consulta(int numvoo[], char *origemvoo[], char *destinovoo[], int lugares[], char escolha2) {
  switch (escolha2) {
        case 4:
          consulta_numero(numvoo, origemvoo, destinovoo, lugares);
        break;
        case 5:
          consulta_origem(numvoo, origemvoo, destinovoo, lugares);

        break;
        case 6:
          consulta_destino(numvoo, origemvoo, destinovoo, lugares);

        break;
        default:
          opcaoinvalida();
        break;
        }
} 

void consulta_numero(int numvoo[], char *origemvoo[], char *destinovoo[], int lugares[]){

  int voo;
   system("clear");
          printf("Números dos voos existentes\n");
          for (int i = 0; i < 12; i++) {
            printf("%d; ", numvoo[i]);
          }

          printf("\n\nDigite o número do voo: ");
          scanf("%d", &voo);
          for (int i = 0; i < 12; i++) {
            if (numvoo[i] == voo) {
              printf("\n\nNúmero do voo: %d", numvoo[i]);
              printf("\nOrigem do voo: %s", origemvoo[i]);
              printf("\nDestino do voo: %s", destinovoo[i]);
              printf("\nLugares disponíveis: %d", lugares[i]);
              break;
            }
            voo_inexistente(i);
          }
}

void consulta_origem(int numvoo[], char *origemvoo[], char *destinovoo[], int lugares[]) {
  char origem[10];
  system("clear");
          printf("Possíveis origens\n");
          for (int i = 0; i < 12; i++) {
            printf("%s; ", origemvoo[i]);
          }
          printf("\n\nDigite a origem do voo: ");
          scanf("%s", origem);
          palavramaiusculo(origem);
          for (int i = 0; i < 12; i++) {
            if (strcmp(origemvoo[i], origem) == 0) {
              printf("\nNúmero do voo: %d", numvoo[i]);
              printf("\nOrigem do voo: %s", origemvoo[i]);
              printf("\nDestino do voo: %s", destinovoo[i]);
              printf("\nLugares disponíveis: %d", lugares[i]);
              break;
            }
            voo_inexistente(i);
          }
} 

void consulta_destino(int numvoo[], char *origemvoo[], char *destinovoo[], int lugares[]) {
  char destino[20];
  system("clear");
          printf("Possíveis destinos\n");
          for (int i = 0; i < 12; i++) {
            printf("%s; ", destinovoo[i]);
          }
          printf("\nDigite a origem do voo: ");
          scanf("%s", destino);
          palavramaiusculo(destino);
          for (int i = 0; i < 12; i++) {
            if (strcmp(destinovoo[i], destino) == 0) {
              printf("\n\nNúmero do voo: %d", numvoo[i]);
              printf("\nOrigem do voo: %s", origemvoo[i]);
              printf("\nDestino do voo: %s", destinovoo[i]);
              printf("\nLugares disponíveis: %d", lugares[i]);
              break;
            }
            voo_inexistente(i);
          }
}

void reserva(int numvoo[], int lugares[]){
  int voo;
  system("clear");

        printf("Números dos voos existentes\n");
        for (int i = 0; i < 12; i++) {
          printf("%d; ", numvoo[i]);
        }
        printf("\n\nDigite o número do voo desejado: ");
        scanf("%d", &voo);
        for (int i = 0; i < 12; i++) {
          if ((numvoo[i] == voo) && (lugares[i] > 0)) {
            printf("\nLugares disponíveis: %d", lugares[i]);
            printf("\nReserva confirmada");
            lugares[i]--;
            printf("\nLugares disponíveis, após sua reserva, no voo: %d",
                   lugares[i]);
            break;
          } else if ((numvoo[i] == voo) && (lugares[i] == 0)) {
            printf("Voo lotado!");
            break;
          }
          voo_inexistente(i);
        }
}

void opcaoinvalida(){
  system("clear");
  printf("Opção Inválida\n");
}

void voo_inexistente(int i) {
  if (i == 11){
    printf("\nVoo inexistente");
  }
}
