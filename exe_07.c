#include <stdio.h>

void trocarValores(int* valor1, int* valor2);

int main()
{
    int valorUm, valorDois;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valorUm);
    printf("Digite o segundo valor: ");
    scanf("%d", &valorDois);
    printf("\n");

    printf("Valores antes da troca:\nPrimeiro = %d\nSegundo = %d\n", valorUm, valorDois);
    printf("\n");

    trocarValores(&valorUm, &valorDois);

    printf("Valores depois da troca:\nPrimeiro = %d\nSegundo = %d\n", valorUm, valorDois);

    return 0;
}

void trocarValores(int* valor1, int* valor2)
{
    int auxiliar;
    auxiliar = *valor1;
    *valor1 = *valor2;
    *valor2 = auxiliar;
}