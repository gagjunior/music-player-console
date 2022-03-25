#include <stdio.h>
#include <stdlib.h>

struct MusicaInfo {
	char nome[61];
	char artista_banda[61];
	float duracao;
};

int main()
{
	int c, opcao = 0;

	while (opcao != 3)
	{
		printf("Player de Musicas\n\n");
		printf("1 - Inserir Musicas\n");
		printf("2 - Listar Musicas\n");
		printf("3 - Sair\n\n");
		printf("Digite o numero da opcao desejada: ");
		scanf_s("%d", &opcao);
		while ((c = getchar()) != '\n' && c != EOF) {}
	}
}
