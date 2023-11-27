#include <math.h>
#include <stdlib.h>

int* array_generator(int* real_size, int k, int m, int f){
    *real_size = 20;
    int sum = f;
    int* mass = (int*)malloc(*real_size * sizeof(int));
    for (int i = 2; i < *real_size; i++){
        mass[i] = 5;
        sum += 5;
    }
    mass[0] = f;
    mass[1] = 0;
    int j = 0;
    int a = 0;
    int b = 0;
    while (sum > k){
        a = *real_size - 1 - j;
        b = mass[*real_size - 1 - j];
        sum -= mass[*real_size - 1 - j];
        mass[*real_size - 1 - j] = 0;
        j ++;
        }

    return mass;
}
