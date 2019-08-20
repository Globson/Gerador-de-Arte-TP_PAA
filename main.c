/*
Autor: Samuel Pedro Campos Sena
Matricula: EF03494
*/
#include"Headers/Gerador_Quadro.h"

int main(int argc, char const *argv[])
{
    char Quadro[20][80];  //Matriz de caracteres para Obra de Arte.
    srand(time(NULL));
    while(1){
      int a,b,d=3;   //Variaveis auxiliares.
      menu();
      printf("\nDigite a arte escolhida:");  //Menu interativo.
      scanf("%d",&a);
      printf("\nDigite a quantidade de figuras (menor ou igual a zero para aleatorio):");
      scanf("%d",&b);
      if(b<=0){   //Verificando se entrada deverá ser aleatoria.
          b=1+(rand()%99);
          printf("\n\t -> Quantidade aleatoria gerada: %d <-\n",b);
        }
        if(a==1){  //Arte de um Asterisco.
          while(1){
            int c=3;  //Variavel auxiliar
            inicia_quadro(Quadro);  //Incializando matriz de quadro.
            plota_asterisco(b,Quadro); //Criando arte.
            imprime_quadro(Quadro); //Imprimindo arte gerada na tela.
            printf("\nDeseja fazer outro quadro com o mesmo valor?");
            printf("\n\t0-Nao");
            printf("\n\t1-Sim");
            while(c!=1 && c!=0){   //Garantindo que entrada de opcao é valida.
              printf("\nEntre:");
              scanf("%d",&c);
              if (c!=1 && c!=0) {
                printf("\n\tValor invalido!\n");
              }
            }
            if(c == 0){  //Caso o usuario opte por nao, o programa descarta valores.
              break;
            }
          }
        }
        else if(a==2){  //Arte de simbolo de Soma.
          while(1){
            int c=3; //Variavel auxiliar
            inicia_quadro(Quadro);   //Incializando matriz de quadro.
            plota_soma(b,Quadro); //Criando arte.
            imprime_quadro(Quadro);  //Imprimindo arte gerada na tela.
            printf("\nDeseja fazer outro quadro com o mesmo valor?");
            printf("\n\t0-Nao");
            printf("\n\t1-Sim");
            while(c!=1 && c!=0){   //Garantindo que entrada de opcao é valida.
              printf("\nEntre:");
              scanf("%d",&c);
              if (c!=1 && c!=0) {
                printf("\n\tValor invalido!\n");
              }
            }
            if(c == 0){  //Caso o usuario opte por nao, o programa descarta valores.
              break;
            }
          }
        }
        else if(a==3){  //Arte de X.
          while(1){
            int c=3; //Variavel auxiliar
            inicia_quadro(Quadro);   //Incializando matriz de quadro.
            plota_X(b,Quadro); //Criando arte.
            imprime_quadro(Quadro);  //Imprimindo arte gerada na tela.
            printf("\nDeseja fazer outro quadro com o mesmo valor?");
            printf("\n\t0-Nao");
            printf("\n\t1-Sim");
            while(c!=1 && c!=0){  //Garantindo que entrada de opcao é valida.
              printf("\nEntre:");
              scanf("%d",&c);
              if (c!=1 && c!=0) {
                printf("\n\tValor invalido!\n");
              }
            }
            if(c == 0){  //Caso o usuario opte por nao, o programa descarta valores.
              break;
            }
          }
        }
        else if(a==4){ //Arte de simbolos misturados.
          while(1){
            int c=3; //Variavel auxiliar
            inicia_quadro(Quadro);   //Incializando matriz de quadro.
            plota_aleatorio(b,Quadro); //Criando arte.
            imprime_quadro(Quadro);  //Imprimindo arte gerada na tela.
            printf("\nDeseja fazer outro quadro com o mesmo valor?");
            printf("\n\t0-Nao");
            printf("\n\t1-Sim");
            while(c!=1 && c!=0){   //Garantindo que entrada de opcao é valida.
              printf("\nEntre:");
              scanf("%d",&c);
              if (c!=1 && c!=0) {
                printf("\n\tValor invalido!\n");
              }
            }
            if(c == 0){  //Caso o usuario opte por nao, o programa descarta valores.
              break;
            }
          }
        }
        else{  //Arte pessoal do aluno.
          while(1){
            int c=3; //Variavel auxiliar
            inicia_quadro(Quadro);  //Incializando matriz de quadro.
            plota_obra_aluno(b,Quadro); //Criando arte.
            imprime_quadro(Quadro);  //Imprimindo arte gerada na tela.
            printf("\nDeseja fazer outro quadro com o mesmo valor?");
            printf("\n\t0-Nao");
            printf("\n\t1-Sim");
            while(c!=1 && c!=0){    //Garantindo que entrada de opcao é valida.
              printf("\nEntre:");
              scanf("%d",&c);
              if (c!=1 && c!=0) {
                printf("\n\tValor invalido!\n");
              }
            }
            if(c == 0){  //Caso o usuario opte por nao, o programa descarta valores.
              break;
            }
          }
        }
        printf("\nDeseja configurar uma nova arte?");
        printf("\n\t0-Nao");
        printf("\n\t1-Sim");
        while(d!=1 && d!=0){    //Garantindo que entrada de opcao é valida.
          printf("\nEntre:");
          scanf("%d",&d);
          if (d!=1 && d!=0) {
            printf("\n\tValor invalido!\n");
          }
        }
        if(d == 0){  //Caso o usuario opte por nao, o programa finaliza.
          break;
        }
  }
  printf("\n\tFinalizando...");
  printf("\n\t=================================\n");
  printf("\t    Desenvolvedor:\n");
  printf("\t    Samuel Sena - 3494\n");
  printf("\tOBRIGADO POR UTILIZAR O PROGRAMA!\n");
  return 0;
}
