#include <stdio.h>
#include <windows.h>

const int LINHAS = 3;
const int COLUNAS = 3;

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float** matriz;

    matriz = (float**) calloc(LINHAS, sizeof(float*));

    for(int i = 0; i < LINHAS; i++)
    {
        matriz[i] = (float*) calloc(COLUNAS, sizeof(float));
    }

    for(int i = 0; i < LINHAS; i++)
    {
        for(int j = 0; j < COLUNAS; j++)
        {
            printf("Posição %d x %d: %p\n", i, j, &matriz[i][j]);
        }
    }

    for(int i = 0; i < LINHAS; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}