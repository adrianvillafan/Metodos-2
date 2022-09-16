//Gauss

#include <stdio.h>
#include <math.h>

#define x1 -sqrt ( 3 ) / 3
#define x2 sqrt ( 3 ) / 3
#define w1 1
#define w2 1

float g( float , float ) , integral ;
int main( )
{
/* Cuadratura Gauss 2 - puntos */
integral = g(x1,x1) + g(x1,x2) + g(x2,x1) + g(x2,x2) ;
printf ( " \n aproximacion integral=%f " , integral ) ;
}

float g ( float x , float y )
{
return x * x + y ;
}