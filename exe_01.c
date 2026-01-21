#include <stdio.h>
#include <stdbool.h>

int main()
{
    char nome[] = "Adalberto";
    int idade = 48;
    double peso = 76.34;
    bool casado = true;

    char* ptrNome = nome;
    int* ptrIdade = &idade;
    double* ptrPeso = &peso;
    bool* ptrCasado = &casado;

    printf("char nome[] = %s, char* ptrNome = %p\n", nome, ptrNome);
    printf("int idade = %d, int* ptrIdade = %p\n", idade, ptrIdade);
    printf("double peso = %.2f, double* ptrPeso = %p\n", peso, ptrPeso);
    printf("bool casado = %d, bool* ptrCasado = %p\n", casado, ptrCasado);

    return 0;
}