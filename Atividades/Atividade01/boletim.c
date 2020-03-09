#include <stdio.h>

int main(){
    double notas[10][3];
    int o;
    for(o=0; o<10; o++){
        scanf("%lf", &notas[o][0]);
        scanf("%lf", &notas[o][1]);
        notas[o][2]=(notas[o][0]+notas[o][1])/2;
    }
    printf("Nota1\t\tNota2\t\tMedia\n");
    for(o=0; o<10; o++){
        printf("%lf\t%lf\t%lf\n", notas[o][0], notas[o][1], notas[o][2]);
    }

    return 0;
}