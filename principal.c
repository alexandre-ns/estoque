#include<stdio.h>

int valor_caixa(void);

int main(void){
  int menu=-1;

  while(menu != 0){
    printf("[ 1 ] - OPERACOES DE CAIXA\n");
    printf("[ 2 ] - ESTOQUE\n");
    printf("[ 3 ] - VALOR DE CAIXA\n");
    printf("[ 4 ] - HISTORICO\n");
    printf("[ 0 ] - SAIR\n");
    printf("\n\nSELICIONE UMA DAS OPCOES: ");
    scanf("%d", &menu);

    switch (menu) {
      case 1: printf("primeiro caso\n");
              break;
      case 2: printf("segungo caso\n" );
              break;
      case 3: valor_caixa();
              break;
      case 0: printf("sair\n" );
              break;
    }
  }


  return 0;
}


int valor_caixa(void){
  //printf("aoijsdflajsdklfjajsjdfjlajçsdjfjasjdfljasjdfjajsdfja\n" );
  float caixa;
  FILE *arq;
  arq = fopen("caixa", "rt");

  if (arq == NULL)  // Se houve erro na abertura
    return -1;

  fclose(arq);
  return 0;
}
