#include <math.h>
#include <stdio.h>
// #include <stdlib.h>
#define PI (3.141592653589793)
double suma(double a, double b ){
    return a + b;
}

double resta(double a, double b){
    return a - b;
}

double multi(double a, double b){
    return a * b;
}

double divis(double a, double b){
    if (b){
        return a/b;
    }
}

double sqrt_lib(double c){
    return sqrt(c);
}

double cos_lib(double c){
    double num1 = fmod(c,2*PI);
    if (num1 > PI) num1=num1-2*PI;
    double cos = (1 - pow(num1, 2)/2 + pow(num1,4)/24 - pow(num1,6)/720);
    // int cuad = c/PI/2;
    // if (cuad == 0 || cuad == 2){
    //     cos = -cos;
    // }
    return cos;
}