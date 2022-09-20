// INTERPOLACION DE LAGRANGE

#include <stdio.h>
#include <iostream>

using namespace std;

int Nods;
float h, r = 18.89;
float x[100], y[100], L[100], R;
float fun(float);
void coordenada();
void lagrangeanos();

int main()
{
    int k;
    float w = 0;
    cout << " Ingrese el numero de nodos del intervalo : ";
    cin >> Nods;
    x[0] = 0, x[1] = 6, x[2] = 10, x[3] = 13, x[4] = 17, x[5] = 20, x[6] = 28;
    y[0] = 6.67, y[1] = 16.11, y[2] = 18.89, y[3] = 15, y[4] = 10.56, y[5] = 9.44, y[6] = 8.89;

    lagrangeanos();

    for (k = 0; k < Nods; k++)
    {
        w = w + L[k] * y[k];
    }
    printf(" \n P(%f) = %f ", r, w);
    cout << " \n ";
}

void lagrangeanos()
{
    float a, b;
    int i, j;
    for (i = 0; i < Nods; i++)
    {
        a = 1;
        b = 1;
        for (j = 0; j < Nods; j++)
        {
            if (i != j)
            {
                a = a * (r - x[j]);
                b = b * (x[i] - x[j]);
            }
        }
        L[i] = a / b;
        printf(" \n L[%d] = %f ", i, L[i]);
    }
}
float fun(float n)
{
    float resultado;
    resultado = n * n;
    return resultado;
}