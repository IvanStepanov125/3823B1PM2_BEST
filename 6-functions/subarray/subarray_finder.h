#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int flag1 = -1;
    int flag2 = -1;
    int flag3 = -1;
    for (int i = 0; i < array_size; i++){
        if ((array[i] == subarray1[0]) && (flag1 == -1)){
            for (int j = 0; j < subarray_size1; j++){
                if (array[i + j] != subarray1[j]){
                    flag1 = -1;
                    break;
                }
                if (array[i + j] == subarray1[j]){
                    flag1 = i;
                }         
            }
        }
        if ((array[i] == subarray2[0]) && (flag2 == -1)){
            for (int j = 0; j < subarray_size2; j++){
                if (array[i + j] != subarray2[j]){
                    flag2 = -1;
                    break;
                }
                if (array[i + j] == subarray2[j]){
                    flag2 = i;
                }         
            }
        }
        if ((array[i] == subarray3[0]) && (flag3 == -1)){
            for (int j = 0; j < subarray_size3; j++){
                if (array[i + j] != subarray3[j]){
                    flag3 = -1;
                    break;
                }
                if (array[i + j] == subarray3[j]){
                    flag3 = i;
                }         
            }
        }
    }
    return flag1 + flag2 + flag3;
}
