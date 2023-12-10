#include <stdio.h>

void main(void){

    int variable=1234;

    printf("El valor de la variable original es: %d\n", variable);

    int* puntero= &variable;

    printf("La direccion de memoria de variable es= %p\n", variable);
    printf("La direccion de memoria del puntero %p\n", *puntero);

    printf("%d\n",variable+1);
    printf("%d\n",*puntero+1);

    *puntero+=1;

    printf("Puntero +1 equivale a: %d\n", *puntero);

}