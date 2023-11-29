#include <math.h>


double A(int k){
    if (k == 0)
        return 0.0;
    else {
        return (A(k-1)+1.0)/k;
    }
}


double F(int k, int t, double count){
    count += A(t);
    if (k != t)
        return F(k, t + 1, count);
    else 
        return count;
}


double find_sum_elements_series(int k){
    double count = 0.0;
    if (k == 0)
        return 0;
    else if (k < 0)
        return -1;
    else{
        count = F(k-1, 0, count);
        return count;
    }
}
