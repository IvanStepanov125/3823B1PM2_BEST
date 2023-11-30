#include <math.h>

double f(int n, int k){
    if (k == 1){
        return 1.0;
        }
    else if (n + 1 == k){
        return 1.0 / k;
    }
    else {
        return 1.0 / k + f(n, k - 1);
    }
}

double sum_series(int n){
    double count = 0.0;
    if (n <= 0)
        return -1;
    if (n > 10000){
        int flag1 = n /10000;
        for (int i = 1; i < flag1; i++){
            count += f((i-1) * 10000, i * 10000);
        }
        int flag2 = n % 10000;
        for (int i = 0; i < flag2; i++){
            count += f((i-1) + 10000 * flag1 , i + 10000 * flag1);
        }
    }
    else {
        count += f(0, n);
    }
    return count; //21.372839595118059
}
