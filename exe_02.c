#include <stdio.h>

int main()
{
    float valores[10];
    float* ptrValores = valores;

    for(int i = 0; i < 10; i++)
    {
        *(ptrValores + i) = 10 * i + 5;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%.2f\n", *(ptrValores + i));
    }

    return 0;
}