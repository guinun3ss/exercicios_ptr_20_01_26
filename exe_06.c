#include <stdio.h>

const int TAMANHO = 10;
void maiorMenor(int vetor[], int* maior, int* menor);

int main()
{
    int numeros[TAMANHO];
    int maiorNum, menorNum;

    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Digite o valor para a posicao %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maiorMenor(numeros, &maiorNum, &menorNum);
    printf("Maior valor: %d | Menor valor: %d", maiorNum, menorNum);

    return 0;
}

void maiorMenor(int vetor[], int* maior, int* menor)
{
    *maior = vetor[0];
    *menor = vetor[0];

    for(int i = 0; i < TAMANHO; i++)
    {
        if(vetor[i] > *maior)
        {
            *maior = vetor[i];
        }
        if(vetor[i] < *menor)
        {
            *menor = vetor[i];
        }
    }
}