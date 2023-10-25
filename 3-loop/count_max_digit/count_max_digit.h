#include <math.h>

char count_max_digit(long long int gfd){
    long long x = gfd;
    int max = 0;
    int kol = 0;
    if (x < 0)
        x *= (-1);

    while (x > 0){
        if ((x % 10) > max){
            max = x % 10;
            kol = 1;
            }
        else if ((x % 10) == max)
            kol += 1;
        
        x /= 10;
        }
    return kol;
}