#include <math.h>

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

int determinant(int matrix[], int size){
    int rez = 0;
    int coif = 1;
    rez = f(matrix, size, coif);
    return rez;
}