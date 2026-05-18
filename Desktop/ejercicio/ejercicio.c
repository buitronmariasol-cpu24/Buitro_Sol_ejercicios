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

    printf("\nEl promedio es: %2.f ", calPromedio(notas, tamanio));
}

float calPromedio(float *vecto, int tamanio)
{
    float suma, promedio;

    for (int i = 0; i < tamanio; i++)
    {
        suma= suma + vecto[i];
    }

    promedio= suma / tamanio;

    return promedio;
}

