
#include <cstdlib>
#include <stdio.h>
#include <math.h>


/*
 * usa el metodo de newton para calcular el cero de la funcion 
 */

//defino funcion funcion1
double funcion1(double);

main() {

    //defino vaiables 
    double x0;
    double x1;
    double cota;
    double error;
    //signo valor 5 a la variable cota
    cota=5;
    //interaccion con el usuario
    printf("Ingrese el valor de comienzo:\n\r");
    scanf("%lf",&x0);
    
    printf("Ingrese el valor del error:\n\r");
    scanf("%lf",&error);
    
    //
    while (cota > error)
    {
        x1=funcion1(x0);
        cota=fabs((x1-x0));
        x0=x1;
    }
    
    printf("El resultado es %lf", x1);
    
}

double funcion1(double x)
{
    double z;
    z=x-(x-cos(x))/(1+sin(x));
    return z;
}
