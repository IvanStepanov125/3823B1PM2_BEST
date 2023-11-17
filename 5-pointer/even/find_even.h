#include <math.h>
#include <stddef.h>

int* find_even(int* arr, int size){
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0){
            int *p;
            p = &arr[i];
            return p;
            }
    }
    return NULL;
}
