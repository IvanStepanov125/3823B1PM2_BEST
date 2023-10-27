#include <math.h>

char find_digit(double number, char digit){
    long long int v = number, y1 = number * 10; 
    int flag = 0, count = 0, y = digit, count2 = 0, flag2 = 0;
    if ((y < 0) || (y > 9))
        return -1;
    while (v > 0){
        if (v % 10 == y)
            flag = count;

        v /= 10;
        count += 1;
    }
    if (y1 % 10 == 0){
        if (count - flag != 0)
            return count - flag;
        else
            return -1;
    }
    if (y1 % 10 != 0){
        long long int t = number * 10000000000;
        while (t > 0){
            if (t % 10 == y)
                flag2 = count2;

            t /= 10;
            count2 += 1;
        }
        if (count2 - flag2 != 0)
            return count2 - flag2 + 1;
        else
            return -1;
    }
}