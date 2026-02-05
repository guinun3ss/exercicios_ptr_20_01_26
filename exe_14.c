#include <stdio.h>
#include <windows.h>

void frac(float num, int* inteiro, float* frac);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float numero;
    int parteInt;
    float parteFrac;

    printf("Digite um número decimal: ");
    scanf("%f", &numero);

    frac(numero, &parteInt, &parteFrac);

    printf("Número digitado: %f.\n", numero);
    printf("Parte inteira: %d.\n", parteInt);
    printf("Parte fracionária: %f.\n", parteFrac);

    return 0;
}

void frac(float num, int* inteiro, float* frac)
{
    *inteiro = (int)num;
    *frac = num - *inteiro;
}