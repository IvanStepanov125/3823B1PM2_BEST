#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int* mass = (int*)malloc(aM * bM * sizeof(int));
    if ((aN != bN) && (aM != bM))
        return NULL;
    for (int j = 0; j < aM * bN; j ++){
        for (int i = 0; i < aM; i++){
        int bas1 = A[aM * (j / aM) + i];
        int bas2 = B[aM * i + (j % bM)];
        int bas3 = aM * (j / aM) + i;
        int bas4 = aM * i + (j % bM);
        int bas5 = A[aM * i + (j / aM)] * B[aM * (j % bM) + i];
        mass[j] += A[aM * i + (j / aM)] * B[aM * (j % bM) + i]; 
        }
    }
    
    return mass;
}
