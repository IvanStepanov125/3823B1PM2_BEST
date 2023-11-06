#include <math.h>

double limit(double eps, int n_max){
    double toch = eps;
    int maksim = n_max;
    double s = 0.0;
    if (maksim == 1){
        s = maksim / sqrt(maksim * maksim + maksim);
        return s;
        }
    else{
        double x1 = 0.0;
        double x2 = 0.0;    
        for (int i = 1; i < maksim + 1; i ++){
            s = (double)i / sqrt(i * i + i);
            x1 = x2;
            x2 = s;
            if (fabs(x2 - x1) <= toch)
                return s;
        }
    }
    return s;

}