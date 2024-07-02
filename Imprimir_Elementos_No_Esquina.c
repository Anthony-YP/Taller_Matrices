#include <stdio.h>
// Definimos la matriz de 3x3 //
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

int main(int argc, char const *argv[])
{
    printf("\n--- ELEMENTOS DE LAS ESQUINAS ---\n");
    // iteramos cada uno de los elementos //
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            // como ya sabemos el tamaño de la matriz podemos verificar si el elemento actual es de la columna del medio o no //
            if (c == 1)
            {
                printf("Elemento del centro encontrado, posicion %i,%i => %i\n", f, c, matriz[f][c]);
            }
        }
    }
    return 0;
}
