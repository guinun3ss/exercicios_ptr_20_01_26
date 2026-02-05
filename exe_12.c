#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero1, numero2;
    int* ptrNum1 = &numero1;
    int* ptrNum2 = &numero2;

    printf("Digite um valor para a primeira variável: ");
    scanf("%d", &numero1);
    printf("Digite um valor para a segunda variável: ");
    scanf("%d", &numero2);

    if(numero1 > numero2)
    {
        printf("O endereço do maior valor é %p.", ptrNum1);
    }
    else if(numero1 < numero2)
    {
        printf("O endereço do maior valor é %p.", ptrNum2);
    }
    else
    {
        printf("Os valores são iguais.");
    }

    return 0;
}