#include <math.h>
#include <stdlib.h>

int* array_generator(int* real_size, int k, int m, int f){
    *real_size = 12;
    int* mass = (int*)malloc(*real_size * sizeof(int));
    for (int i = 0; i < *real_size; i++){
        mass[i] == 0;
    }
    mass[0] = f;
    return mass;
}
