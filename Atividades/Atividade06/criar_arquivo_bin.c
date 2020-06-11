#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    
	FILE *arquivo;
	
	arquivo = fopen("dados.bin", "wr+"); 

	if (arquivo == NULL){
		printf("Erro ao abrir o arquivo!!! \n");
		return 1;
	}
	
	if (feof (arquivo)== EOF){
		printf("Fim de arquivo encontrado!!! \n");
		return 1;
	}
	printf ("Pressione uma tecla para finalizar...");
	getchar(); 
	
	
	return 0;
}