#include"Headers/Gerador_Quadro.h"

int main(int argc, char const *argv[])
{
    char Quadro[20][80];
    srand(time(NULL));
    while(1){
        int a,b;
        inicia_quadro(Quadro);
        menu();
        printf("\nDigite a arte escolhida:");
        scanf("%d",&a);
        printf("\nDigite a quantidade de figuras (menor ou igual a zero para aleatorio):");
        scanf("%d",&b);
        if(b<=0){
            b=1+(rand()%100); //pode ser q necessite diminuir.//
            printf("\n\t -> Quantidade aleatoria gerada: %d <-",b);
        }
        if(a==1){
          plota_asterisco(b,Quadro);
        }
        else if(a==2){
          plota_soma(b,Quadro);
        }
        else if(a==3){
          plota_X(b,Quadro);
        }
        else if(a==4){
          plota_aleatorio(b,Quadro);
        }
        else{}
        imprime_quadro(Quadro);
    }
    return 0;
}
