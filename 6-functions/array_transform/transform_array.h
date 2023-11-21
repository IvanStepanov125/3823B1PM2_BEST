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
            double sr_arif = 0.0;
            for (int j = 0; j < size; j ++){
                sr_arif += array[j];
            }
            sr_arif = sr_arif / size;
            for (int j = 0; j < size; j ++){
                array[j] = pow(fabs(array[j]), sr_arif);
            }            
        }
        if (comands[i] == 4){
            for (int j = 0; j < size; j++){
                if (((int)fabs(array[j])) % 2 == 0)
                    array[j] *= -1;
                else if (((int)fabs(array[j])) % 2 == 1)
                    array[j] = 1 / array[j];
            }
            
        }
        if (comands[i] == 5){
            for (int j = 0; j < size; j++){
                if ((((int)array[j]) % 2 == 0) && (j % 2 == 0))
                    array[j] = 0;
            }
            
        }
        if (comands[i] == 6){
            for (int j = 0; j < size; j++){
                if (j < size / 2 + 1)
                    array[j] = 0;
                else
                    array[j] = 1;
            }
            
        }
    }
    return;
}
