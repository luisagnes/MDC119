#include <stdio.h>

int main(){
    short int ano;
    scanf("%hd", &ano);
    if (ano%4==0 &&ano%100!=0 ||ano%400==0){
        printf("O ano %hd é bissexto", ano);
    }
    else
    {
        printf("O ano %hd nao e bissexto", ano);
    }
    
    
    return 0;
}