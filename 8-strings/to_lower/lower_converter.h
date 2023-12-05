#include <math.h>
#include <string.h>
#include <ctype.h>

void lower(char* str){
    int len = strlen(str);
    for (int i = 0; i < len; i ++){
        str[i] = tolower(str[i]);
    }
}
