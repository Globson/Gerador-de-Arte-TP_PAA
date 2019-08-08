/*
Autor: Samuel Pedro Campos Sena
Matricula: EF03494
*/
#include"../Headers/Gerador_Quadro.h"

void menu(){   //Função para exibir menu interativo
    printf("\n\tGERADOR DE OBRA DE ARTE");
    printf("\n\t=======================");
    printf("\n1 - Asterisco simples.");
    printf("\n2 - Simbolo de soma com asteriscos.");
    printf("\n3 - Letra X com asteriscos.");
    printf("\n4 - Figuras aleatorias.");
    printf("\n5 - Arte do Aluno.\n");
}
void inicia_quadro(char Quadro[20][80]){
    int i,j;        //Função que inicializa matriz Quadro com espaços vazios e bordas com "-" e "|".
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
    int i,j;  //Função para imprimir matriz com arte.
    printf("\n\t\t\t\tOBRA GERADA:\n");
    for(i=0;i<20;i++){
        printf("\n");
        for(j=0;j<80;j++){
            printf("%c",Quadro[i][j]);
    }
  }
}
void plota_asterisco(int Quant,char Quadro[20][80]){ //Função para criar arte de astericos aleatorios.
  int i,x,y;
  if(Quant>100){  //Limitando quantidade de elementos.
    printf("\n\tQuantidade excede 100!! Alternando para o 100.\n");
    Quant = 100;
  }
  for(i=0;i<Quant;i++){
    x = 1+(rand()%18);    //Inicialmente as coordenadas aleatorias são geradas
    y = 1+(rand()%78);
    while(Quadro[x][y] == '*'){   //Caso a posição aleatoria gerada anteriormente esteja ocupada, é gerado novamente uma nova coordenada até que encontre uma disponivel.
      x = 1+(rand()%18);
      y = 1+(rand()%78);
    }
    Quadro[x][y]='*';  //Posição aleatoria disponivel sendo preenchida.//
  }
}
void plota_soma(int Quant,char Quadro[20][80]){  //Função para criar arte de simbolo de soma.
  int i,x,y;
  if(Quant>100){  //Limitando quantidade de elementos.
    printf("\n\tQuantidade excede 100!! Alternando para 100.\n");
    Quant = 100;
  }
  for(i=0;i<Quant;i++){
    x = 2+(rand()%16);          //Intervalo de rand() otimizado para a reespectiva figura
    y = 2+(rand()%76);          //Inicialmente as coordenadas aleatorias são geradas
    while((Quadro[x][y] != ' ') || (Quadro[x+1][y] != ' ') || (Quadro[x-1][y] != ' ') || (Quadro[x][y+1] != ' ') || (Quadro[x][y-1] != ' ')){
      x = 2+(rand()%16);            //Caso a posição aleatoria gerada anteriormente ou as posições vizinhas que virão a ser utilizadas estejam ocupadas , é gerado novamente uma nova coordenada até que encontre uma disponivel.
      y = 2+(rand()%76);
    }
    Quadro[x][y]='*';   //Devidas posições disponiveis sendo preenchidas para gerar arte desejada.//
    Quadro[x+1][y]='*';
    Quadro[x-1][y]='*';
    Quadro[x][y+1]='*';
    Quadro[x][y-1]='*';
  }
}
void plota_X(int Quant,char Quadro[20][80]){  ////Função para criar arte de X.
  int i,x,y;
  if(Quant>100){  //Limitando quantidade de elementos.
    printf("\n\tQuantidade excede 100!! Alternando para 100.\n");
    Quant = 100;
  }
  for(i=0;i<Quant;i++){
    x = 2+(rand()%16);
    y = 2+(rand()%76);      //Inicialmente as coordenadas aleatorias são geradas
    while((Quadro[x][y] != ' ') || (Quadro[x+1][y+1] != ' ') || (Quadro[x-1][y-1] != ' ') || (Quadro[x-1][y+1] != ' ') || (Quadro[x+1][y-1] != ' ')){
      x = 2+(rand()%16);        //Caso a posição aleatoria gerada anteriormente ou as posições vizinhas que virão a ser utilizadas estejam ocupadas , é gerado novamente uma nova coordenada até que encontre uma disponivel.
      y = 2+(rand()%76);
    }
    Quadro[x][y]='*';   //Devidas posições disponiveis sendo preenchidas para gerar arte desejada.//
    Quadro[x+1][y+1]='*';
    Quadro[x-1][y-1]='*';
    Quadro[x-1][y+1]='*';
    Quadro[x+1][y-1]='*';
  }
}
void plota_aleatorio(int Quant,char Quadro[20][80]){  //Função para criar quadro de figuras aleatorias.
  int Q_Aster,Q_Soma,Q_x; //Quantidade de cada elemento.//
  if(Quant>100){  //Limitando quantidade de elementos.
    printf("\n      Quantidade excede 100!! Alternando para 100.\n");
    Quant = 100;
  }
  Q_Aster = (rand()%Quant);  //Inicialmente uma quantidade aleatoria é definida pra arte de Asterisco
  Q_Soma = (rand()%(Quant-Q_Aster));  //Em seguida a quantidade da arte de simbolo de Soma é gerada tendo seu intervalo reduzido pela quantidade da arte de Asterisco.//
  Q_x = Quant - Q_Aster - Q_Soma;   //E por ultimo a quantidade de simbolos de X é obtida pela diferença de simbolos de Soma e Asteriscos da quantidade total requisitada.//
  printf("\n      Quantidades de cada figura:\n\t* : %d \n\t+ : %d \n\tX : %d ",Q_Aster,Q_Soma,Q_x);
  plota_asterisco(Q_Aster,Quadro);    //Por ultimo são chamadas as funções para preencher o quadro com as reespectivas quantidades aleatorias geradas.//
  plota_soma(Q_Soma,Quadro);
  plota_X(Q_x,Quadro);
}
void plota_obra_aluno(int Quant,char Quadro[20][80]){ //Figura escolhida possui duas letras "S" referenciando o primeiro e ultimo nome do aluno.//
  int i,x,y;
  if(Quant>57){  //Limitando quantidade da arte do aluno de acordo com testes de limite de quantidades efetuados.
    printf("\n\tQuantidade excede capacidade do quadro!! Alternando \n\tpara o limite seguro da quantidade da figura -> 57\n");
    Quant = 57;
  }
  for(i=0;i<Quant;i++){
    x = 3+(rand()%14);      //Intervalo de numeros randomicos otimizado para reduzir possiveis ciclos em while abaixo.//
    y = 4+(rand()%72);      //Inicialmente as coordenadas aleatorias são geradas
    while((Quadro[x][y] != ' ') || (Quadro[x][y+1] != ' ') || (Quadro[x][y-1] != ' ') || (Quadro[x+1][y+2] != ' ') || (Quadro[x+1][y-2] != ' ') || (Quadro[x-1][y+2] != ' ') || (Quadro[x-1][y-2] != ' ') || (Quadro[x][y+3] != ' ') || (Quadro[x][y-3] != ' ') || (Quadro[x+2][y] != ' ') || (Quadro[x-2][y] != ' ')){
      x = 3+(rand()%14);          //Caso a posição aleatoria gerada anteriormente ou as posições vizinhas que virão a ser utilizadas estejam ocupadas , é gerado novamente uma nova coordenada até que encontre uma disponivel.
      y = 4+(rand()%72);
    }
    Quadro[x][y]='&';    //Devidas posições disponiveis sendo preenchidas para gerar arte desejada.//
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
