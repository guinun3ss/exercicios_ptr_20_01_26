#include <stdio.h>
#include <windows.h>

const int LINHAS = 100;
const int COLUNAS = 100;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int** matriz;
    int contador = 1;

    // alocação do vetor de ponteiros
    // usei calloc porque preenche as posições do vetor com 0
    matriz = (int**) calloc(LINHAS, sizeof(int*));

    // alocação das linhas da matriz
    for(int i = 0; i < LINHAS; i++)
    {
        matriz[i] = (int*) calloc(COLUNAS, sizeof(int));
    }

    // imprimindo a matriz com os valores padrão
    for(int i = 0; i < LINHAS; i++)
    {
        for(int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    // colocando valores na matriz
    for(int i = 0; i < LINHAS; i++)
    {
        for(int j = 0; j < COLUNAS; j++)
        {
            *(*(matriz + i) + j) = contador;
            contador++;
        }
    }

    // imprimindo a matriz preenchida
    for(int i = 0; i < LINHAS; i++)
    {
        for(int j = 0; j < COLUNAS; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // desalocação de memória
    for(int i = 0; i < LINHAS; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}