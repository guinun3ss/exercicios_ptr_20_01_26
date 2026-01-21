#include <stdio.h>

int main()
{
    int tamanho;
    float valorPosicao;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float valores[tamanho];
    float* ptrValores = valores;

    for(int i = 0; i < 10; i++)
    {
        printf("Informe o valor da posicao %d: ", i + 1);
        scanf("%f", &valorPosicao);
        *(ptrValores + i) = valorPosicao;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%.2f\n", *(ptrValores + i));
    }

    return 0;
}