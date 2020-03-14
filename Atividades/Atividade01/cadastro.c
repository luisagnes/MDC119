#include <stdio.h>

typedef struct funcionario_t{
    char nome[50];
    double salario;
    char admissao[10];
    
} Fun;

int main(){
    Fun funcionarios[100], funcionario;
    int total=0, i;
    while(total < 100){
        printf("Digite o nome: ");
        scanf("\n%[^\n]s", funcionario.nome);
        if(funcionario.nome[0]=='0'){
            break;
        }
        printf("Digite o salario: ");
        scanf("%lf", &funcionario.salario);
        printf("Digite a admissao: ");
        scanf("\n%[^\n]s", funcionario.admissao);
        funcionarios[total]=funcionario;
        total++;
    }
    for(i=0; i<total; i++){
        printf("Nome: %s\n Salario: %lf\n admissao: %s\n", funcionarios[i].nome, funcionarios[i].salario, funcionarios[i].admissao);
    }

    return 0;
}