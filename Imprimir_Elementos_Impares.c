#include <stdio.h>
// Definimos la matriz de 3x3 //
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

int main(int argc, char const *argv[])
{
    // Imprimir elementos impares //
    printf("\n----- ELEMENTOS IMPARES -----\n");
    // recorremos cada uno de los elementos de la matriz //
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            // verificamos si el elemento actual es impar o no //
            if (matriz[f][c] % 2 != 0)
            {
                printf("Elemento impar de la matriz encontrado, posicion %i,%i => %i\n", f, c, matriz[f][c]);
            }
        }
    }
    return 0;
}
