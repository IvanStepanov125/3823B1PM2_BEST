#include <math.h>

unsigned long long calc_e(char order){
    int toch = order;
    double prov = pow(10, toch);
    double prov1 = 1.0 / prov;
    double a = 2.718281;
    for (int i = 1; i < 1000000; i ++){
        double d = pow((1.0 + 1.0 / i), i);
        if ((int)(a * prov)  == (int)(d * prov)){
            return i;
            break;
        }
    }
}