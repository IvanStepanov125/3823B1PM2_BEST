#include <math.h>
#include <stddef.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int minim = (int)fmin(aN, aM);
    int maksim = (int)fmax(aN, aM);
    int mass[minim * minim];
    if ((aN != bN) && (aM != bM))
        return NULL;
    for (int k = 0; k < minim * minim; k++){
        for (int i = 0; i < aN; i ++){
            for (int j = 0; j < aM; j ++){
            int bas1 = A[aM * i + j];
            int bas2 = B[aM * j + i];
                mass[k] += A[aM * i + j] * B[aM * j + i]; 
            }
        }
        аа
    }
    int *p = mass;
    return p;
}
