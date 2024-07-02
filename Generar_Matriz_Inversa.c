#include <stdio.h>

// Función para calcular la matriz inversa de una matriz 3x3
void calcularMatrizInversa(double matriz[3][3], double inversa[3][3])
{
    // Calcular el determinante de A
    double det =
        matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1]) -
        matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]) +
        matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);

    // Verificar si el determinante es cero (matriz singular)
    if (det == 0)
    {
        printf("La matriz es singular, no tiene inversa.\n");
        return;
    }

    // Calcular la matriz de cofactores y la transponer para obtener la adjunta
    double cofactores[3][3];
    cofactores[0][0] = matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1];
    cofactores[0][1] = -(matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0]);
    cofactores[0][2] = matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0];
    cofactores[1][0] = -(matriz[0][1] * matriz[2][2] - matriz[0][2] * matriz[2][1]);
    cofactores[1][1] = matriz[0][0] * matriz[2][2] - matriz[0][2] * matriz[2][0];
    cofactores[1][2] = -(matriz[0][0] * matriz[2][1] - matriz[0][1] * matriz[2][0]);
    cofactores[2][0] = matriz[0][1] * matriz[1][2] - matriz[0][2] * matriz[1][1];
    cofactores[2][1] = -(matriz[0][0] * matriz[1][2] - matriz[0][2] * matriz[1][0]);
    cofactores[2][2] = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];

    // Calcular la adjunta (transponer la matriz de cofactores)
    double adjunta[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            adjunta[i][j] = cofactores[j][i];
        }
    }

    // Calcular la matriz inversa
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            inversa[i][j] = adjunta[i][j] / det;
        }
    }
}

int main()
{
    // Definimos una matriz //
    double matriz[3][3] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}};

    // Definimos matriz para almacenar la inversa //
    double inversa[3][3];

    // Calculamos la matriz inversa //
    calcularMatrizInversa(matriz, inversa);

    // Imprimimos la matriz inversa //
    printf("--- Matriz Inversa ---\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%2.f", inversa[i][j]);
        }
        printf("\n");
    }

    return 0;
}
