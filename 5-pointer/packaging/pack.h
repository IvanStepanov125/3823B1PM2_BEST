#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size > 8)
        return 0;
    unsigned long long otv = 0;
    for (int i = 0; i < size; i ++){
        unsigned long long int j = 1;
        for (int k = 0; k < i; k ++){
            j *= 256;
        }
        otv += arr[i] * j;
    }
    return otv;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char b1 = (unsigned char)(input >> 32);
    return b1;
}