#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	setlocale (LC_ALL, "");
		
    FILE *Arq;

    typedef struct{

        char Nome[30];

        char Matricula[10];

    }aluno;

    char texto[50];

    aluno ptr;

    Arq = fopen("alunos.dat", "w");

    if (Arq == NULL){

        printf("Erro ao criar o arquivo\n");

        return;

    }

    memset(ptr.Matricula,0,sizeof(ptr.Matricula));

    printf("A Matricula é =  %s", ptr.Matricula);

    scanf("%s", ptr.Matricula);

    getchar();

    while (strcmp(ptr.Matricula, "0")){

        memset(ptr.Nome,0,sizeof(ptr.Nome));

        printf("O Nome é= ");

        scanf("%s", ptr.Nome);

        getchar();

        fwrite (&ptr.Matricula, sizeof(ptr.Matricula), 1, Arq);
        fwrite (&ptr.Nome, sizeof(ptr.Nome), 1, Arq);
        
        memset(ptr.Matricula,0,sizeof(ptr.Matricula));

        printf("A Matricula é = ");

        scanf("%s", ptr.Matricula);

        getchar();  

    }

    fclose(Arq);

    Arq = fopen("alunos.dat", "r");

    fread(&ptr.Matricula, sizeof(ptr.Matricula), 1, Arq);

    fseek(Arq,SEEK_SET,0);

    while (!feof(Arq)){

        fread(ptr.Nome,sizeof(ptr.Nome),strlen(ptr.Nome),Arq);

        printf("%s - %s\n", ptr.Matricula, ptr.Nome);

        fread(ptr.Matricula,sizeof(ptr.Matricula),strlen(ptr.Matricula),Arq);
    }

    fclose(Arq);

    return 0;

}