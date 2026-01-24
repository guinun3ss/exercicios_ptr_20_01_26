#include <stdio.h>
#include <windows.h>
#include <string.h>

void copiarString(char* string1, char* string2);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char strOriginal[100];
    char strCopia[100];

    printf("Digite um valor textual: ");
    fgets(strOriginal, sizeof(strOriginal), stdin);

    copiarString(strOriginal, strCopia);

    printf("String original: %s", strOriginal);
    printf("Cópia da string: %s\n", strCopia);

    return 0;
}

void copiarString(char* string1, char* string2)
{
    strcpy(string2, string1);
}