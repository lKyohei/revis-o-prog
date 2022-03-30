#include <stdio.h>
#include <string.h>
int main(){
	
	char nome[100];
	char usuario[15];
	
	printf("Digite seu nome do livro:");
	gets(nome);
	printf("Digite tipo do usuario (professor ou aluno):");
	gets(usuario);//funçao que serve para transformar tudo pra maiusculo
	strupr(usuario);
	
	//strcmp usado para comparação
	int prof = strcmp(usuario, "PROFESSOR");
	int alun = strcmp(usuario, "ALUNO");
	
	if(prof == 0)
	{
		printf("nome do livro: %s\n", nome);
		printf("tipo de usuario: %s\n", usuario);
		printf("total de dias: 10");
	}
	else if(alun == 0)
	{
		printf("nome do livro: %s\n", nome);
		printf("tipo de usuario: %s\n", usuario);
		printf("total de dias: 3");
	
} 
    else
    {
    	printf("usuario invalido!!");
	}
	
	
	
	
	return 0;
}
