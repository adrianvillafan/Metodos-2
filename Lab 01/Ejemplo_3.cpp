// INTERPOLACION DE LAGRANGE

#include <stdio.h>
#include <iostream>

using namespace std ;

int Nods ;
float h , r = 3 ;
float x [100] , y[100] , L[100] , R ;
float fun(float) ;
void coordenada() ;
void lagrangeanos()  ;

int main ( )
{
int k ;
float w = 0 ;
cout << " Ingrese el numero de nodos del intervalo : " ;
cin >> Nods ;
x[0] = 2 , x[1] = 2.75 , x[2] = 4 ;
y[0] = 1/x[0] , y[1] = 1/x[1] , y[2] = 1/x[2] ;

lagrangeanos() ;

for ( k = 0 ; k < Nods ; k ++ )
{
w = w + L[k] * y[k] ;
}
cout << " igual a = " << w ;
}

void lagrangeanos() {
float a , b ;
int i , j ;
for ( i = 0 ; i < Nods ; i++ ){
a = 1 ;
b = 1 ;
for ( j = 0 ; j < Nods ; j++ ){
if ( i != j ){
a = a * ( r - x[j] ) ;
b = b * ( x[i] -x[j] ) ;
}
}
L[i] = a / b ;
printf(" \n L[%d] = %f " , i , L[i] ) ;
}
}
float fun(float n)
{
float resultado ;
resultado = n * n ;
return resultado ;
}