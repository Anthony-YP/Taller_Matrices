#include <stdio.h>
// Definimos la matriz de 3x3 //
int matriz[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}};

int main(int argc, char const *argv[])
{
    printf("\n--- ELEMENTOS DE LAS ESQUINAS ---\n");
    // usamos un doble for para recorrer cada elemento de la matriz //
    for (int f = 0; f < 3; f++)
    {
        for (int c = 0; c < 3; c++)
        {
            // verificamos si la posicion del elemento actual es de la esquina y lo mostramos //
            if (c == 0)
            {
                printf("Elemento de la esquina izquierda, posicion %i,%i => %i\n", f, c, matriz[f][c]);
            }
            if (c == 3 - 1)
            {
                printf("Elemento de la esquina derecha, posicion %i,%i => %i\n", f, c, matriz[f][c]);
            }
        }
    }
    return 0;
}
