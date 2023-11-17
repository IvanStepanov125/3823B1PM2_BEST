#include <math.h>

int calcsize(void* memory){
    int i = -1;
    int count = 0;
    int flag = 2;
    char *mass = memory;
    while (flag){
        i ++;
        if (mass[i] == 11){
            flag = 1;
            count = i;
        }
        else if ((mass[i] == 47) && (flag == 1)){
            flag = 0;
            return i + (i - count); 
        }
        else if ((mass[i] != 0) && (flag == 1)){
             flag = 2;
        }
    }
}
