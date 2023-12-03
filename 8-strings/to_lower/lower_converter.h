#include <math.h>
#include <string.h>

void lower(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i ++){
        if ((str[i] != 32) && (str[i] < 97))
            str[i] += 32;
    }
}
