#include <math.h>

int QuadraticEquation(double a, double b, double c){
    double x1,x2,d,i1,i2,dd;
    d = b * b - 4 * a * c;
    x1= ( (-1) * b + sqrt( abs(d) )) / (2.0 * a);
    x2= ( (-1) * b - sqrt( abs(d) )) / (2.0 * a);
    return round(x1+x2); 
    
}