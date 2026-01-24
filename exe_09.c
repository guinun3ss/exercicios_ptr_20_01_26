#include <stdio.h>

const int TAMANHO = 10;
void copiarVetor(int* vetor1, int* vetor2);

int main()
{
    int vetorOriginal[TAMANHO];
    int copiaVetorOriginal[TAMANHO];

    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Digite um valor para a posicao %d: ", i + 1);
        scanf("%d", &vetorOriginal[i]);
    }

    copiarVetor(vetorOriginal, copiaVetorOriginal);

    for(int i = 0; i < TAMANHO; i++)
    {
        printf("Original: %d | Copia: %d\n", vetorOriginal[i], copiaVetorOriginal[i]);
    }

    return 0;
}

void copiarVetor(int* vetor1, int* vetor2)
{
    for(int i = 0; i < TAMANHO; i++)
    {
        *(vetor2 + i) = *(vetor1 + i);
    }
}