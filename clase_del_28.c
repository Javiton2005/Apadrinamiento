// Fuciones
//para crear un puntero para una variable, lo necesitamos crearlo del mismo tipo que a la variable que apuntaremos

#include <stdio.h>

int mi_array[]={1,23,17,4,-5,100};
int *ptr;
int ejemplo1(void){

    int i;
    //ptr=&mi_array[0];
    ptr=mi_array;
    for(i=0;i<6;i++){
        printf("mi_array[%d]=%d \n", i, mi_array[i]);
        printf("ptr+%d=%d\n", i, *(ptr+i));
    }
}

void ejemplo2(void){

    void ptr
// si creamos un puntero con void se adaptara a la variable que se apunte
    return;
}

int main(void){

    int var=7;
    int *ptr;
    ptr=&var;

    printf("%d", *ptr);
    ejemplo1();
    return 0;
}