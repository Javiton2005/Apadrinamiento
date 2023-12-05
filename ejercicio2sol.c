#include <stdio.h>

/*int valor1(int valor){
    valor=valor*2;
    return valor;
}
int valor2(int valor){
    valor=valor*2;
    return valor;
}
int valor3(int valor){
    valor=valor*2;
    return valor;
}
int valor4(int valor){
    valor=valor*2;
    return valor;
}
int valor5(int valor){
    valor=valor*2;
    return valor;
}


void main(void){
    
    int numero1=0, numero2=0;
    printf("introduzca un valor del 1 al 5: ");
    scanf("%d",&numero1);
    printf("\n");

    switch(numero1){
        case 1:
            numero2=valor1(numero1);
            break;
        case 2:
            numero2=valor2(numero1);
            break;
        case 3:
            numero2=valor3(numero1);
            break;
        case 4:
            numero2=valor4(numero1);
            break;
        case 5:
            numero2=valor5(numero1);
            break;
    }
    printf("La nota %d/5 equivale a %d/10 ", numero1, numero2);
}*/

int valor1(int valor){
    return valor*2;
}
int valor2(int valor){
    return valor*2;
}
int valor3(int valor){
    return valor*2;
}
int valor4(int valor){
    return valor*2;
}
int valor5(int valor){
    return valor*2;
}

void main(){
    int numero1=0;
    printf("introduzca un valor del 1 al 5: ");
    scanf("%d",&numero1);

    switch(numero1){
        case 1:
            printf("\nLa nota %d/5 equivale a %d/10 ", numero1, valor1(numero1));
            break;
        case 2:
            printf("\nLa nota %d/5 equivale a %d/10 ", numero1, valor2(numero1));
            break;
        case 3:
            printf("\nLa nota %d/5 equivale a %d/10 ", numero1, valor3(numero1));
            break;
        case 4:
            printf("\nLa nota %d/5 equivale a %d/10 ", numero1, valor4(numero1));
            break;
        case 5:
            printf("\nLa nota %d/5 equivale a %d/10 ", numero1, valor5(numero1));
            break;
    }
}

