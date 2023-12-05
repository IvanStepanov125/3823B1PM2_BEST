#include <math.h>
#include <string.h>
#include <stdlib.h>

int is_palindrom(char text[]){
    int len0 = strlen(text);
    if (len0 == 0)
        return 1;
    int count = 0;
    for (int i = 0; i < len0; i++){
        if (((text[i] >= 65) && (text[i] <= 90)) || ((text[i] >= 97) && (text[i] <= 122)) ||
            ((text[i] >= 128) && (text[i] <= 175)) || ((text[i] >= 224) && (text[i] <= 241)))
            count ++;
    }
    char* text1 = (char*)malloc(count * sizeof(char));
    int j = 0;
    for (int i = 0; i < len0; i++){
        if (((text[i] >= 65) && (text[i] <= 90)) || ((text[i] >= 97) && (text[i] <= 122)) ||
            ((text[i] >= 128) && (text[i] <= 175)) || ((text[i] >= 224) && (text[i] <= 241))){
            text1[j] = text[i];
            j ++;
        }
    }
    int flag = 0;
    for (int i = 0; i < (count / 2) - 1; i++){
        if ((fabs(text1[i] - text1[count - 1 - i]) == 0) || (fabs(text1[i] - text1[count - 1 - i]) == 32))
            flag = 1;
        else{
            flag = 0;
            break;
        }
    }
    return flag;
}
