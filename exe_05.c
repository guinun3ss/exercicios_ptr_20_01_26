#include <stdio.h>

typedef struct
{
    char nome[30];
    int idade;
} Cliente;

void preencherInfo(Cliente* cliente);
void obterInfo(Cliente* cliente);

int main()
{
    Cliente cliente1;

    preencherInfo(&cliente1);
    obterInfo(&cliente1);

    return 0;
}

void preencherInfo(Cliente* cliente)
{
    printf("Informe o nome do(a) cliente: ");
    scanf("%s", cliente->nome);
    printf("Informe a idade do(a) cliente: ");
    scanf("%d", &cliente->idade);
}

void obterInfo(Cliente* cliente)
{
    printf("Nome do(a) cliente: %s\n", cliente->nome);
    printf("Idade do(a) cliente: %d\n", cliente->idade);
}