#include"../Headers/Gerador_Quadro.h"

void menu(){
    printf("\n\tGERADOR DE OBRA DE ARTE");
    printf("\n\t=======================");
    printf("\n1 - Asterisco simples.");
    printf("\n2 - Simbolo de soma com asteriscos.");
    printf("\n3 - Letra X com asteriscos.");
    printf("\n4 - Figuras aleatorias.");
    printf("\n5 - Arte do Aluno\n");
}
void inicia_quadro(char Quadro[20][80]){
    int i,j;
    for(i=0;i<20;i++)
        for(j=0;j<80;j++){
          if(i==0 || i==19)
            Quadro[i][j] = '-';
          else if(j==0 || j==79)
            Quadro[i][j] = '|';
          else
            Quadro[i][j] = ' ';
        }
}
void imprime_quadro(char Quadro[20][80]){
    int i,j;
    printf("\n\t\t\t\tOBRA GERADA:\n");
    for(i=0;i<20;i++){
        printf("\n");
        for(j=0;j<80;j++){
            printf("%c",Quadro[i][j]);
    }
  }
}
void plota_asterisco(int Quant,char Quadro[20][80]){
  int i,x,y;
  for(i=0;i<Quant;i++){
    x = 1+(rand()%18);
    y = 1+(rand()%78);
    while(Quadro[x][y] == '*'){
      x = 1+(rand()%18);
      y = 1+(rand()%78);
    }
    Quadro[x][y]='*';
  }
}
void plota_soma(int Quant,char Quadro[20][80]){}
void plota_X(int Quant,char Quadro[20][80]){}
void plota_aleatorio(int Quant,char Quadro[20][80]){}
void plota_obra_aluno(int Quant,char Quadro[20][80]){}
