// Cuadrado de una funcion

#include <iostream>
double Cuadrado(double);
using namespace std;

int main()
{
    cout << Cuadrado(11) << endl;
}

// regresar el cuadrado de un numero
double Cuadrado(double n)
{
    return n*n;
}