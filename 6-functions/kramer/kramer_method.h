#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int f(int matrix[], int size, int coif){
    int opred = 0;
    int coif1 = 1;
    int count = 0;
    int cons = sqrt(size);
    if ((sqrt(size) - (double)cons) > 0.000000000001)
        return -404;
    if (cons == 2){
        opred = matrix[0] * matrix[3] - matrix[1] * matrix[2];
        return opred * coif;
        }
    
    if (cons > 2){
        for (int k = 0; k < cons; k++){
            int raz = (cons - 1) * (cons - 1); 
            int now[raz];
            int w = 0;
            for (int i = 0; i < cons; i ++){
                for (int j = 0; j < cons; j ++){
                    if ((j != k) && ((i * cons + j) >= cons)){
                        now[w] = matrix[i * cons + j];
                        w ++;
                        }
                }      
            }
            if (k % 2 == 0)
                coif1 = matrix[k];
            else 
                coif1 = (-1) * matrix[k];
            coif1 *= coif;
            count += f(now, raz, coif1);
        }
    }

    return count;
}


double kramer_method(int* matrix, int* vector, int size){
    int coif = 1;
    int razmer = size * size;
    int* matr0 = matrix;
    int del = f(matr0, razmer, coif);
    if (del == 0)
        return -1;
    
    int* matr1 = (int*)malloc(razmer * sizeof(int));
    int* matr2 = (int*)malloc(razmer * sizeof(int));
    int* matr3 = (int*)malloc(razmer * sizeof(int));
    int* vect = (int*)malloc(size * sizeof(int));
    for (int k = 0; k < razmer; k ++){
        matr1[k] = matrix[k];
        matr2[k] = matrix[k];
        matr3[k] = matrix[k];
        
    }
    for (int k = 0; k < size; k ++){
        vect[k] = vector[k];
    }
   
    for (int i = 0; i < size; i++){
        matr1[size * i] = vect[i];
        matr2[size * i + 1] = vect[i];
        matr3[size * i + 2] = vect[i]; 
    }
    
    int del1 = f(matr1, razmer, coif);
    int del2 = f(matr2, razmer, coif);
    int del3 = f(matr3, razmer, coif);
    
    double otv;
    if (size == 3)
        otv = (double)del1 / (double)del + (double)del2 / (double)del + (double)del3 / (double)del;
    if (size == 2)
        otv = (double)del1 / (double)del + (double)del2 / (double)del;
    return otv;
}
