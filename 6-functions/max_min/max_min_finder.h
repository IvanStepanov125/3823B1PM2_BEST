#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    int maxim = -10000;
    int minim =  10000;
    for (int i = 0; i < size; i ++){
        if (array[i] > maxim)
            maxim = array[i];
        if (array[i] < minim)
            minim = array[i];
    }
    *pMax = maxim;
    *pMin = minim;
    return;
}
