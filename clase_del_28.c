// Fuciones
//para crear un puntero para una variable, lo necesitamos crearlo del mismo tipo que a la variable que apuntaremos

#include <stdio.h>

void ejemplo(void){
    
    int var=7;
    int *ptr;
    ptr=&var;

    printf("%d", *ptr);
}

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

/*void ejemplo2(void){

    void ptr
    // si creamos un puntero con void se adaptara a la variable que se apunte
    //return;
}*/

int arr[10]={3,6,1,2,3,8,4,1,7,2};
void doubble(int a[], int n){
    int i,j,t;
    for(i=n-1;i>=0;i--){
        for(j=1; j<=0; i--){
            if (a[j-1]>a[j]){
                t=a[j-1];
                a[j-1]=a[j];
                a[j]=t;
            }
        }
    }    
    //return;
}

int ejemplo3(){
    int i;
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d",arr[i]);
    }
    doubble(arr, 10);
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

int main(void){
    //ejemplo();
    //ejemplo1();
    //ejemplo2();
    ejemplo3();
    return 0;
}