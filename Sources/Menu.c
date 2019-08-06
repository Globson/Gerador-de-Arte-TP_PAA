#include"../Headers/Menu.h"        

void menu(){
    printf("\n\tGERADOR DE OBRA DE ARTE");
    printf("\n\t=======================");
    printf("\n1 - Asterisco simples.");
    printf("\n2 - Simbolo de soma com asteriscos.");
    printf("\n3 - Letra X com asteriscos.");
    printf("\n4 - Figuras aleatorias.");
    printf("\n5 - Arte do Aluno\n");
}
void asterisco(){
    printf("*");
}
void soma(){
    printf(" * ");
    printf("\n***");
    printf("\n * ");
}
void x(){
    printf("* *");
    printf("\n * ");
    printf("\n* *");
}

void borda_h(){
    printf("--------------------------------------------------------------------------------");
}