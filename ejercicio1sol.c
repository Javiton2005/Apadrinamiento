#include <stdio.h>
void main(void){

    int valor;
    scanf("%d",&valor);
    //printf("Valor: %d\n", valor);
    //Esta siguiente linea es para almacenar los valores en una array pero no te pido ello solo te pido imprimirlos
    char abecedario[valor];
    int i;
    char letra;
    for(i = 0 ; i < valor; i++){    
        printf("Introduce la letra: ");
        scanf(" %c",&letra);
        //printf("%c\n", letra);
        abecedario[i]=letra;
    }
    //imprimimos el valor de la array
    printf("Las Letras son: \n");
    for(i=0; i< valor; i++){
        printf("%c ", abecedario[i]);
    }
    printf("\n");

    //segunda parte
    int valor2part=0;
    printf("Introduce un valor (max 100): ");
    scanf(" %d",&valor2part);
    do{
        if(valor2part>50){
            printf("El valor %d es mayor que 50\n", valor2part);
        }
        valor2part--;
    }while(valor2part>50);
    
}