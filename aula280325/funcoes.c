#include <stdio.h>
#include <string.h>
#include "cadastrarNomes.h"

void addNome(){
	
	if(numNomes>=MAX_NOMES){
		printf("Lista cheia!");
		return;
	} //verifica lista
	//teste
	
	printf("Digite um nome:");
	scanf(" %[^\n]s", listaNomes[numNomes].nome);
	printf("Digite sua idade:");
	scanf(" %d", &listaNomes[numNomes].idade);
	printf("Digite sua cidade:");
	scanf(" %[^\n]s", listaNomes[numNomes].cidade);
	printf("Digite seu emprego:");
	scanf(" %[^\n]s", listaNomes[numNomes].trabalho.cargo);
	printf("Digite seu tempo de emprego (meses ou anos):");
	scanf(" %d", &listaNomes[numNomes].trabalho.ano);
	printf("Agora sobre seu carro:\n");
	printf("Digite seu modelo de carro:");
	scanf(" %[^\n]s", listaNomes[numNomes].meuCarro.modelo);
	printf("Digite o ano do seu carro:");
	scanf(" %d", &listaNomes[numNomes].meuCarro.ano);
	printf("Digite a cor do seu carro:");
	scanf(" %[^\n]s", listaNomes[numNomes].meuCarro.cor);
	printf("Se deseja vender seu carro[s/n]:");
	scanf(" %c", &listaNomes[numNomes].meuCarro.statusVenda);
	printf("Agora sobre seu pet:\n");
	printf("Digite o nome do seu pet:");
	scanf(" %[^\n]s", listaNomes[numNomes].meuPet.nome);
	printf("Digite a raca do seu pet:");
	scanf(" %[^\n]s", listaNomes[numNomes].meuPet.raca);
	printf("Digite a idade do seu pet:");
	scanf(" %d", &listaNomes[numNomes].meuPet.idade);
	
	numNomes++;
	printf("Usuario cadastrado!\n");
};

void mostrarNome(){
	
	if(numNomes==0){
		printf("Lista vazia!\n");
		return;
	} //verifica lista
	
	printf("--Pessoas cadastras--\n");
	for(int i=0; i<numNomes; i++){
		printf("%d - {\n", i);
		printf("Nome: %s\n", listaNomes[i].nome);
		printf("Idade: %d\n", listaNomes[i].idade);
		printf("Cidade: %s\n", listaNomes[i].cidade);
		printf("Cargo: %s\n", listaNomes[i].trabalho.cargo);
		printf("Quanto tempo de emprego: %d\n", listaNomes[i].trabalho.ano);
		printf("Modelo do seu carro: %s\n", listaNomes[i].meuCarro.modelo);
		printf("Cor do seu carro: %s\n", listaNomes[i].meuCarro.cor);
		printf("Ano do seu carro: %d\n", listaNomes[i].meuCarro.ano);
		
		if(listaNomes[i].meuCarro.statusVenda == 's'){
			printf("O usuario: %s deseja vender o carro: %s\n", listaNomes[i].nome, listaNomes[i].meuCarro.modelo);
		}else{
			printf("O usuario: %s nao deseja vender o carro!\n", listaNomes[i].nome);
		}
		
		printf("Nome do seu Pet: %s\n", listaNomes[i].meuPet.nome);
		printf("Raca do seu Pet: %s\n", listaNomes[i].meuPet.raca);
		printf("Idade do seu Pet: %d\n", listaNomes[i].meuPet.idade);
		printf("}\n");
		printf("\n");
	}
};

void editarNome(){

	int i;
	
	printf("Digite o indice do nome:\n");
	scanf("%d", &i);
	
	if(i<0 || i >= numNomes){
		printf("Indice invalido!\n");
		return;
	}
	printf("Digite o novo nome:\n");
	scanf(" %[^\n]s", listaNomes[i].nome);
	printf("Digite a nova idade:\n");
	scanf("%d", &listaNomes[i].idade);
	printf("Digite a nova cidade:\n");
	scanf(" %[^\n]s", listaNomes[i].cidade);
	printf("Digite seu novo emprego:\n");
	scanf(" %[^\n]s", listaNomes[i].trabalho.cargo);
	listaNomes[i].trabalho.ano = 0;
	printf("Digite o novo carro:\n");
	scanf(" %[^\n]s", listaNomes[i].meuCarro.modelo);
	printf("Digite o ano do novo carro:\n");
	scanf(" %d", &listaNomes[i].meuCarro.ano);
	printf("Digite a cor do novo carro:\n");
	scanf(" %[^\n]s", listaNomes[i].meuCarro.cor);
	printf("Se deseja vender seu carro[s/n]:");
	scanf(" %c", &listaNomes[numNomes].meuCarro.statusVenda);
	printf("Digite o nome do seu novo pet:\n");
	scanf(" %[^\n]s", listaNomes[i].meuPet.nome);
	printf("Digite a raca do seu novo pet:\n");
	scanf(" %[^\n]s", listaNomes[i].meuPet.raca);
	printf("Digite a idade do seu novo pet:\n");
	scanf(" %d", &listaNomes[i].meuPet.idade);
	
	printf("Editado com sucesso!\n");
};

void excluirNome(){
	
	int i, indice;
	printf("Digite o indice do nome:\n");
	scanf("%d", &i);
	
	if(i<0 || i >= numNomes){
		printf("Indice invalido!\n");
		return;
	}
	for(indice=i; indice<numNomes;indice++){
		strcpy(listaNomes[i].nome, listaNomes[i+1].nome);
	}
	numNomes--;
	printf("Nome excluido com sucesso!\n");
};

