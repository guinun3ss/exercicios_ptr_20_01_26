#include <stdio.h>

int main()
{
    char caracteres[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i','j'};
    char* ptrCaracteres = caracteres;

    for(int i = 0; i < 10; i++)
    {
        printf("Valor: %c | Endereco: %p\n", caracteres[i], ptrCaracteres);
        ptrCaracteres++;
    }

    return 0;
}