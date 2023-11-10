#include <math.h>
int shislo(int mas1[], int mas2[], int a1, int b1, int a2, int b2, int index){
    int count = 0;
    for (int i = 0; i < b2; i ++){
        for (int j = 0; j < a2; j ++){
            count += mas1[(i + index / b2) * b2 + j + index % a2] * mas2[i * b2 + j];
        }
    }
    return count;
}

int find_matrix_kernel(int matrix[], int kernel[], int matrix_size, int kernel_size){
    int dl1 = sqrt(matrix_size);
    int vis1 = sqrt(matrix_size);
    int dl2 = sqrt(kernel_size);
    int vis2 = sqrt(kernel_size);
    int raz1 = dl1 - dl2;
    int raz2 = vis1 - vis2; 
    int new_raz = (raz1 + 1) * (raz2 + 1);
    int flag = 1;
    while (flag){
        int dl3 = raz1 + 1;
        int vis3 = raz2 + 1;
        int mas[new_raz];
        for (int i = 0; i < vis3; i++){
            for (int j = 0; j < dl3; j++){
                int index = i * dl3 + j; 
                mas[index] = shislo(matrix, kernel, dl1, vis1, dl2, vis2, index);
            }
            
        }
        dl1 = dl3;
        vis1 = vis3;
        raz1 = dl1 - dl2;
        raz2 = vis1 - vis2;
        matrix = mas;
        if (((raz1 + 1) > dl2) && ((raz2 + 1) > vis2)) 
            new_raz = (raz1 + 1) * (raz2 + 1);
        else 
            flag = 0;
    }
    int otv = 0;
    for (int k = 0; k < new_raz; k++){
        otv += matrix[k];
    }
    return otv;
}