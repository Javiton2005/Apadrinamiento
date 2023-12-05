#include <stdio.h>

void main(void){

    char array [27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','ñ','o','p','q','r','s','t','e','v','w','x','y','z'};

    printf("%c\n",array[5]);
    printf("%c\n",array[9]);
    printf("%c\n",array[11]);
    //printf("%c\n",array[35]); no se puede por que se va re rango

    for(int i=0; i<27;i++){
        printf(" %c",array[i]);

    }
    printf("\n");
    for(int i=27; i>=0;i--){
        printf("%c ",array[i]);

    }

}