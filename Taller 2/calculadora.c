#include <stdio.h>
#include "biblioteca.h"
#include <stdlib.h>
#define sum 1
#define res 2
#define mul 3
#define div 4
#define sqrt 5

int pass()
{
    return 1;
}

int fail()
{
    return 0;
}

int main(int argc, char **argv)
{

    switch (argc)
    {
    case 1:
        fail();
    case 2:
        fail();
    }
    
    double a = atof(argv[2]);
    double c = a;
    double b = atof(argv[3]);

    switch (atoi(argv[1]))        {
        case sum:
            printf("suma %lf + %lf = %lf\n", a, b, suma(a, b));
    // pass();
        case res:
            printf("resta %lf - %lf = %lf\n", a, b, resta(a, b));
    // pass();
        case mul:
            printf("multiplicacion %lf + %lf = %lf\n", a, b, multi(a, b));
    // pass();
        case div:
            printf("division %lf / %lf = %lf\n", a, b, divis(a, b));
    // pass();
        case sqrt:
            printf("Raiz cuadrada de %lf= %lf\n", c, sqrt_lib(c));
    // pass();
        default:
            printf("Coseno de %lf= %lf\n", c, cos_lib(c));
            // default statements
        }
    pass();
}