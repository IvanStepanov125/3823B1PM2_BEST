#include <math.h>
double count = 0.0;

int f(int n){
    count += 1 / (double)n; 
    if (n == 1){
        return 0.0;
        }
    else {
        return f(n - 1);
    }
}

double sum_series(int n){
    if (n <= 0)
        return -1;
    count = 0.0;
    f(n);
    return count;
}
