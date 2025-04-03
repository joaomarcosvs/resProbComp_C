#ifndef CADASTRAR_NOMES_H
#define CADASTRAR_NOMES_H

#define MAX_NOMES 100

struct Emprego{
	char cargo[250];
	int ano;
	
};

struct Carro{
	char modelo[50];
	char cor [50];
	int ano;
	char statusVenda;
};

struct Pet{
	char raca[50];
	char nome[50];
	int idade;
};

struct Pessoa{
	char nome[50];
	int idade;
	char cidade[50];
	struct Emprego trabalho;
	struct Carro meuCarro;
	struct Pet meuPet;
};

extern struct Pessoa listaNomes[MAX_NOMES];
extern int numNomes;

void addNome();
void mostrarNome();
void editarNome();
void excluirNome();

#endif
