#include <math.h>
#include <stddef.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int minim = (int)fmin(aN, aM);
    int maksim = (int)fmax(aN, aM);
    int mass[minim * minim];
    if ((aN != bN) && (aM != bM))
        return NULL;
    for (int j = 0; j < aM; j ++){
        for (int i = 0; i < aN; i ++){
        int bas1 = A[aM * j + i];
        int bas2 = B[aM * i + j];
            mass[??] += A[aM * i + j] * B[aM * j + i]; 
        }
    }

    int *p = mass;
    return p;
}
