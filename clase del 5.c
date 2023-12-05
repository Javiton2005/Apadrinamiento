#include <stdio.h>


void main(int argc, char *argv[]){
    if (argc!=2){
        printf("Has olvidado nombre");
    }else{
        printf("Hola, %s", argc);
    }
}