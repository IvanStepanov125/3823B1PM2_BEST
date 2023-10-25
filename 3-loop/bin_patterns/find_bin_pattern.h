 #include <math.h>

char find_bin_pattern(int number){
    int x = number;
    int flag  = 0;
    int kol = 0;
    while (x > 0){
        if (x % 2 == 1){
            if (flag == 0)
                flag += 1;
            else if (flag == 2){
                kol += 1;
                flag = 1;
                }
            else
                flag = 1;
        }
        if (x % 2 == 0){
            if (flag == 1)
                flag += 1;
            else
                flag = 0;
        }
        x /= 2;
        }
    return kol;
}