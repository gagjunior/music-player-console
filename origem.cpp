#include <stdio.h>
#include <stdlib.h>

int menu();
void inserir();
void listar();

struct MusicaInfo
{
	char nome[61];
	char artista_banda[61];
	int duracao;
	struct MusicaInfo *proximaMusica;

} * Head;

int main()
{
	int opcao = 0;

	// Loop que mantem o programa executando enquanto
	// a opção for diferente de '3'
	while (opcao != 3)
	{
		opcao = menu();
		switch (opcao)
		{
		case 1:
			inserir();
			break;
		case 2:
			listar();
			break;
		}
	}
}

int menu()
{
	int c, opcao;

	// Titulo da aplicação
	printf("Player de Musicas\n\n");
	// Opções do menu
	printf("1 - Inserir Musicas\n");
	printf("2 - Listar Musicas\n");
	printf("3 - Sair\n\n");
	// Solicita a opção
	printf("Digite o numero da opcao desejada: ");
	scanf("%d", &opcao);
	while ((c = getchar()) != '\n' && c != EOF)
	{
	}
	printf("\n");

	return opcao;
}

void inserir()
{
	int c;
	char nome[61];
	char artista_banda[61];
	int duracao;

	// Declara uma nova musica
	MusicaInfo *NovaMusica;
	// Faz a alocação na memória da nova musica
	NovaMusica = (struct MusicaInfo *)malloc(sizeof(struct MusicaInfo));

	// Seta os valores para nova musica
	printf("Digite o nome da musica (maximo 60 caracteres): ");
	scanf("%s", &NovaMusica->nome);
	while ((c = getchar()) != '\n' && c != EOF)
	{
	}

	printf("Digite o nome da banda ou artista (maximo 60 caracteres): ");
	scanf("%s", &NovaMusica->artista_banda);
	while ((c = getchar()) != '\n' && c != EOF)
	{
	}

	printf("Digite a duracao da musica: ");
	scanf("%d", &NovaMusica->duracao);
	while ((c = getchar()) != '\n' && c != EOF)
	{
	}

	if (Head == NULL)
	{
		Head = NovaMusica;
		Head->proximaMusica = NULL;
	}
	else
	{
		NovaMusica->proximaMusica = Head;
		Head = NovaMusica;
	}

}

void listar()
{

	MusicaInfo *ElementoVarredura;
	ElementoVarredura = (struct MusicaInfo *)malloc(sizeof(struct MusicaInfo));

	ElementoVarredura = Head;

	if (ElementoVarredura == NULL)
	{
		return;
	}

	printf("--- Lista de Musicas ---\n");

	while (ElementoVarredura != NULL)
	{
		printf("Nome: %s, Artista: %s, Duracao: %d\n",
				 ElementoVarredura->nome,
				 ElementoVarredura->artista_banda,
				 ElementoVarredura->duracao);
		ElementoVarredura = ElementoVarredura->proximaMusica;
	}
	printf("\n");
}