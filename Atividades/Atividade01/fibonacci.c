#include <stdio.h>

int main() {
    int anterior, numero, proximo, cont=1;
    numero=0;
    proximo=1;
    while(cont<=10){
        printf("%d\n", numero);
        anterior=proximo;
        proximo+=numero;
        numero=anterior;
        cont++;
    }
    
    return 0;
}