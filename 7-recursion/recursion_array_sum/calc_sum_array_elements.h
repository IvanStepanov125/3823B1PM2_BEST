#include <math.h>

int f(int* array, int array_size){
    if (array_size == 0)
        return array[0];
    else
        return array[array_size] + f(array, array_size - 1);
    }

int calc_sum_elements(int* array, int array_size){
    if (array_size <= 0)
        return -1;
    else 
        return f(array, array_size - 1);
    
}
