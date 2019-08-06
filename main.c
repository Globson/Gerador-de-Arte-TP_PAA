#include"Headers/Menu.h"

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    while(1){
        int a,b;
        menu();
        printf("\nDigite a arte escolhida:");
        scanf("%d",&a);
        printf("\nDigite a quantidade de figuras (menor ou igual a zero para aleatorio):");
        scanf("%d",&b);
        if(b<=0)
            b=rand()%100; //pode ser q necessite diminuir.//
    
    }
    return 0;
}
