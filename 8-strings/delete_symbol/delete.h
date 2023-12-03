#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int len = strlen(str);
    int j = 0;
    for (int i = 0; i < len; i ++){
        if (str[i] != sym){
            str[j] = str[i];
            j ++;
        }
    }
    str[j] = "\0";
}

