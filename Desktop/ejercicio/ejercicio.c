#include <stdio.h>
float calPromedio(float *vector, int tamanio);

int main()
{
    float notas[5]={6,7,7.5,6.5,8};
    int tamanio=5;
    
    for (int i =0; i<5; i++)
    {
        printf("%2.f",notas[i]);
    }

    calPromedio(notas, tamanio);
}

