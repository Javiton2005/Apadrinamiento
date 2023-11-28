#include <stdio.h>

void cambia(int *a, int *b){//recibimos en puntero la direccion de memoria
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    printf("Valor de x: %d\nValor de y: %d", *a, *b);
    return;
}

void sumarValor(int numero){
    //crea como copia
    numero++;
    printf("Valor de Nº en funcion es %d\n",numero);
    return;
}
void funcion(){
    char num1='a';
    printf("Funcion1 1, dato=%d, num1=%c\n", dato, num1);
    return;
}
void funcion2(){
    int dato=25;
    char num2='z';
    printf("Funcion2, dato=%d, num2=%c\n", dato, num2);
    return;
}
int main (){
    int x=0, y=1;

    cambia(&x,&y); //enviamos valores en direccion;

    //mandamos en valor no es direccion
    int numero=57;
    sumarValor(numero);
    printf("Valor de Nº en main es %d", numero);
    
    funcion();
    funcion2();

    return 0;
}
