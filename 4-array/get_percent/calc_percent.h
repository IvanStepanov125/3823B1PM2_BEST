#include <math.h>

int calc_percent(int matrix[], int size){
    int maksim = -100000;
    int minim = 100000;
    for (int i = 0; i < size; i ++){
        if (maksim < matrix[i])
            maksim = matrix[i];
        if (minim > matrix[i])
            minim = matrix[i];
    }
    double c = (maksim - minim) / 2;
    int count = 0;
    for (int j = 0; j < size; j ++){
        if ((double)matrix[j] > c)
            count ++;
    }
    double otv = (count / (double)size) * 100;

    return (int)otv;
}