#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

char* convert(double number1){
    double number = number1;  
    if (number1 < 0)
        number = (-1) * number1;

    int doz = (int)number;
    int doz1 = (int)number;
    int count1 = 0;
    while (doz1 != 0){
        doz1 /= 10;
        count1 ++;
    }
    double poz = number - doz;
    int rez = 0;
    int flag = 1;
    int count = 0;
    while (flag){
        if (count == 4){
            flag = 0;
            rez = poz;
            }
        else{ 
            poz *= 10;
            count += 1;
            int t = (int)poz % 10;
            if (t == 9){
                flag = 0;
                poz /= 10;
                poz ++;
                rez = poz;
                count -= 1;
                }
        }
    }
    int k = 0;
    char* str = (char*)malloc(sizeof(char) * 100);
    if (number1 < 0){
        str[0] = 45;
        k++;
    }
    for (int i = 0; i < count1; i ++){
        str[count1 + k - 1 - i] = doz % 10 + 48;
        doz /= 10;
    }
    k += count1;
    str[k] = 46;
    k++;
    for (int i = 0; i < count; i ++){
        str[count + k - 1 - i] = rez % 10 + 48;
        rez /= 10;
    }
    
    k += count;
    if (rez < 0){
        str[k] = 48;
        k++;
    }
    str[k] = 0;  
    return str;
}
