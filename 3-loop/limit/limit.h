#include <math.h>

double limit(double eps, int n_max){
    double toch = eps;
    int maksim = n_max;
    if (maksim <= 1){
        double s = (double)maksim / sqrt((double)maksim * (double)maksim + (double)maksim);
        return s;
        }
    else{
        double x1 = 0.0;
        double x2 = 0.0;    
        for (int i = 1; i < maksim + 1; i ++){
            double s = (double)i / sqrt((double)i * (double)i + (double)i);
            x1 = x2;
            x2 = s;
            printf("%lf %lf %lf\n", x1, x2, toch);
            if (fabs(x2 - x1) <= toch)
                return s;
        }
    }
        
    

}