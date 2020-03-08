#include <stdio.h>

int main(){
    int array[10];
    int cont;
    for(cont=0; cont<10; cont++) {
        scanf("%d", &array[cont]);
    }  
    for(cont=0; cont<10; cont++) {
        printf("%d\n" , array[cont]);
    }

    return 0;
}