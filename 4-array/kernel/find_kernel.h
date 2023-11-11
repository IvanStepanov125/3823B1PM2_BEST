#include <math.h>
#include <stdlib.h>

int shislo(int mas1[], int mas2[], int a1, int b1, int a2, int b2,int a3, int b3, int index){
    int count = 0;
    for (int i = 0; i < b2; i ++){
        for (int j = 0; j < a2; j ++){
            int basem = mas1[(i + (index / b2)) * a1 + j + (index % a2)];
            count += mas1[(i + (index / a3)) * a1 + j + (index % a3)] * mas2[i * b2 + j];
        }
    }
    return count;
}

int find_matrix_kernel(int matrix[], int kernel[], int matrix_row, int matrix_col, int kernel_row, int kernel_col){
    int dl1 = matrix_col;
    int vis1 = matrix_row;
    int dl2 = kernel_col;
    int vis2 = kernel_row;
    int raz1 = dl1 - dl2;
    int raz2 = vis1 - vis2; 
    int new_raz = (raz1 + 1) * (raz2 + 1);
    int* matrix1 = matrix;
    int flag = 1;
    while (flag){
        int dl3 = raz1 + 1;
        int vis3 = raz2 + 1;
        int* mas = (int*)malloc(sizeof(int) * new_raz);
        for (int i = 0; i < vis3; i++){
            for (int j = 0; j < dl3; j++){
                int index = i * dl3 + j; 
                mas[index] = shislo(matrix1, kernel, dl1, vis1, dl2, vis2, dl3, vis3, index);
            }
            
        }
        dl1 = dl3;
        vis1 = vis3;
        raz1 = dl1 - dl2;
        raz2 = vis1 - vis2;
        matrix1 = mas;
        if (((raz1 + 1) >= 0) && ((raz2 + 1) >= 0)) 
            new_raz = (raz1 + 1) * (raz2 + 1);
        else 
            flag = 0;
    }
    int otv = 0;
    for (int k = 0; k < new_raz; k++){
        otv += matrix1[k];
    }
    return otv;
}