#include <stdio.h>

void preencherVetor(int tamanhoVetor, float* vetor);
void percorrerVetor(int tamanhoVetor, float* vetor);

int main()
{
    int tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float valores[tamanho];

    preencherVetor(tamanho, valores);
    percorrerVetor(tamanho, valores);

    return 0;
}

void preencherVetor(int tamanhoVetor, float* vetor)
{
    float valorPosicao;

    for(int i = 0; i < tamanhoVetor; i++)
    {
        printf("Informe o valor da posicao %d: ", i + 1);
        scanf("%f", &valorPosicao);
        *(vetor + i) = valorPosicao;
    }
}

void percorrerVetor(int tamanhoVetor, float* vetor)
{
    for(int i = 0; i < tamanhoVetor; i++)
    {
        printf("%.2f\n", *(vetor + i));
    }
}