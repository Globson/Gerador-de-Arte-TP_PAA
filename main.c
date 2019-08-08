/*
Autor: Samuel Pedro Campos Sena
Matricula: EF03494
*/
#include"Headers/Gerador_Quadro.h"

int main(int argc, char const *argv[])
{
    char Quadro[20][80];  //Matriz de caracteres para Obra de Arte.
    srand(time(NULL));
    while(1){  //loop continuo do programa.
        int a,b;   //Variaveis auxiliares.
        inicia_quadro(Quadro);
        menu();
        printf("\nDigite a arte escolhida:");  //Menu interativo.
        scanf("%d",&a);
        printf("\nDigite a quantidade de figuras (menor ou igual a zero para aleatorio):");
        scanf("%d",&b);
        if(b<=0){   //Verificando se entrada deverá ser aleatoria.
            b=1+(rand()%100);
            printf("\n\t -> Quantidade aleatoria gerada: %d <-\n",b);
        }
        if(a==1){  //Arte de um Asterisco.
          plota_asterisco(b,Quadro);
        }
        else if(a==2){  //Arte de simbolo de Soma.
          plota_soma(b,Quadro);
        }
        else if(a==3){  //Arte de X.
          plota_X(b,Quadro);
        }
        else if(a==4){ //Arte de simbolos misturados.
          plota_aleatorio(b,Quadro);
        }
        else{  //Arte pessoal do aluno.
          plota_obra_aluno(b,Quadro);
        }
        imprime_quadro(Quadro);  //Imprimindo arte gerada na tela.
    }
    return 0;
}
