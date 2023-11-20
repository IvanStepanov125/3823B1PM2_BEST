#include <math.h>

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++){
        if (comands[i] == 1){
            for (int j = 0; j < size; j ++){
                array[j] += 1;
            }
        }
        if (comands[i] == 2){
            for (int j = 0; j < size; j ++){
                array[j] = sqrt(fabs(array[j]));
            }
        }
        if (comands[i] == 3){
            
        }
        if (comands[i] == 4){
            
        }
        if (comands[i] == 5){
            
        }
        if (comands[i] == 6){
            
        }
    }
    return;
}
