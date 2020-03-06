#include <stdio.h>

int main(){
    int array[]= {1,2,3,4,5,6,7,8,9,10};
    int i;
    for(i=0; i<10; i++){
        printf("%d\t", array[i]);
    }
    printf("\n");
    for(i=9; i>=0; i--){
        printf("%d\t" , array[i]);
    }

    return 0;
}