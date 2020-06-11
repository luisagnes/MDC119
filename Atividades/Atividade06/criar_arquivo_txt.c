#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	
	
	FILE *arquivo;
	
	arquivo = fopen("C:\Users\Prixilique\Documents\Xilipe\IESB\APC II\MDC119\Atividades\Atividade06\arquivo.txt", "a"); 
	
	if (arquivo == NULL){
		printf("Erro ao abrir o arquivo!!! \n");
		return 1;
	}
	

	
	printf ("Pressione ENTER para continuar...");
	getchar(); 

	fclose (arquivo);
		
	return 0;
}