#include <stdio.h>
#include "cadastrarNomes.h"

int numNomes = 0;
struct Pessoa listaNomes[MAX_NOMES];

int main(){
	
	int opcao;
	
	do{
		
		printf("---MENU---\n");
		printf("1 - Adicionar\n");
    	printf("2 - Mostrar\n");
    	printf("3 - Editar\n");
    	printf("4 - Excluir\n");
    	printf("Escolha uma opcao: ");
    	scanf("%d", &opcao);
    	
    	switch(opcao){
    		
    		case 1:
    			addNome();
    			break;
    		
    		case 2:
    			mostrarNome();
    			break;
    			
    		case 3:
    			editarNome();
    			break;
    			
    		case 4:
    			excluirNome();
    		break;
    			
    	default: printf("Opcao invalida!\n"); break;
    		
		} // esse fecha o switch
		
	}while (opcao != 0); //menu dos guri

	return 0;
	
} //menu principal, dos guri
