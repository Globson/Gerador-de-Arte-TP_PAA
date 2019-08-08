#include"../Headers/Gerador_Quadro.h"

void menu(){
    printf("\n\tGERADOR DE OBRA DE ARTE");
    printf("\n\t=======================");
    printf("\n1 - Asterisco simples.");
    printf("\n2 - Simbolo de soma com asteriscos.");
    printf("\n3 - Letra X com asteriscos.");
    printf("\n4 - Figuras aleatorias.");
    printf("\n5 - Arte do Aluno.\n");
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
void plota_soma(int Quant,char Quadro[20][80]){
  int i,x,y;
  for(i=0;i<Quant;i++){
    x = 2+(rand()%16);
    y = 2+(rand()%76);
    while((Quadro[x][y] != ' ') || (Quadro[x+1][y] != ' ') || (Quadro[x-1][y] != ' ') || (Quadro[x][y+1] != ' ') || (Quadro[x][y-1] != ' ')){
      x = 2+(rand()%16);
      y = 2+(rand()%76);
    }
    Quadro[x][y]='*';
    Quadro[x+1][y]='*';
    Quadro[x-1][y]='*';
    Quadro[x][y+1]='*';
    Quadro[x][y-1]='*';
  }
}
void plota_X(int Quant,char Quadro[20][80]){
  int i,x,y;
  for(i=0;i<Quant;i++){
    x = 2+(rand()%16);
    y = 2+(rand()%76);
    while((Quadro[x][y] != ' ') || (Quadro[x+1][y+1] != ' ') || (Quadro[x-1][y-1] != ' ') || (Quadro[x-1][y+1] != ' ') || (Quadro[x+1][y-1] != ' ')){
      x = 2+(rand()%16);
      y = 2+(rand()%76);
    }
    Quadro[x][y]='*';
    Quadro[x+1][y+1]='*';
    Quadro[x-1][y-1]='*';
    Quadro[x-1][y+1]='*';
    Quadro[x+1][y-1]='*';
  }
}
void plota_aleatorio(int Quant,char Quadro[20][80]){
  int Q_Aster,Q_Soma,Q_x; //Quantidade de cada elemento.//
  Q_Aster = (rand()%Quant);
  Q_Soma = (rand()%(Quant-Q_Aster));
  Q_x = Quant - Q_Aster - Q_Soma;
  printf("\n      Quantidades de cada figura:\n\t* : %d \n\t+ : %d \n\tX : %d ",Q_Aster,Q_Soma,Q_x);
  plota_asterisco(Q_Aster,Quadro);
  plota_soma(Q_Soma,Quadro);
  plota_X(Q_x,Quadro);
}
void plota_obra_aluno(int Quant,char Quadro[20][80]){ //Figura escolhida possui duas letras "S" referenciando o primeiro e ultimo nome do aluno.//
  int i,x,y;
  for(i=0;i<Quant;i++){
    x = 3+(rand()%14); //Intervalo de numeros randomicos otimizado para reduzir possiveis ciclos em while abaixo.//
    y = 4+(rand()%72);
    while((Quadro[x][y] != ' ') || (Quadro[x][y+1] != ' ') || (Quadro[x][y-1] != ' ') || (Quadro[x+1][y+2] != ' ') || (Quadro[x+1][y-2] != ' ') || (Quadro[x-1][y+2] != ' ') || (Quadro[x-1][y-2] != ' ') || (Quadro[x][y+3] != ' ') || (Quadro[x][y-3] != ' ') || (Quadro[x+2][y] != ' ') || (Quadro[x-2][y] != ' ')){
      x = 3+(rand()%14);
      y = 4+(rand()%72);
    }
    Quadro[x][y]='&';
    Quadro[x][y+1]='S';
    Quadro[x][y-1]='S';
    Quadro[x+1][y+2]='*';
    Quadro[x+1][y-2]='*';
    Quadro[x-1][y+2]='*';
    Quadro[x-1][y-2]='*';
    Quadro[x][y+3]='*';
    Quadro[x][y-3]='*';
    Quadro[x+2][y]='*';
    Quadro[x-2][y]='*';
  }
}
