#include <stdio.h>

int main() {
    int funcionario[][10]={{1111,30001000},{2222,30002000},{3333,30003000},{4444,30004000},{5555,30005000},{6666,30006000},{7777,30007000}};
    int matricula, i;
    scanf("%d", &matricula);
    for(i=0; i<7; i++) {
        if (matricula==funcionario[i][0]){
            printf("%d\n", funcionario[i][1]);
            break;
        }
    }

    return 0;
}