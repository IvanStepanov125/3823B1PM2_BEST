#include <math.h>

int QuadraticEquation(double a, double b, double c){
     int x1,x2,d,i1,i2,dd;
    d=b*b-4*a*c;
    if (d>=0){
    x1=((-1)*b+sqrt(d))/(2*a);
    x2=((-1)*b-sqrt(d))/(2*a);
    return x1+x2;
    }
    else {
        i1=(sqrt(d*(-1)))/2*a;
        i2=((-1)*sqrt(d*(-1)))/2*a;
        dd=((-1)*b)/2*a;
        return dd+dd+i1+i2;
    }
    if(((x1+x2)-(int)(x2+x1))<0.5)
        return x1+x2;
    else
        return (int)(x1+x2)+1;
}