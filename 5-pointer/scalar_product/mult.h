#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double pi = 3.1415;
    int chislitel = 0;
    for (int i = 0; i < size; i++){
        chislitel += vec1[i] * vec2[i];
    }
    double t1 = 0;
    double t2 = 0;
    for (int i = 0; i < size; i++){
        t1 += vec1[i] * vec1[i];
        t2 += vec2[i] * vec2[i];
    }
    double znamenat = sqrt(t1 * t2);
    double del = (double)chislitel / (double)znamenat;
    double otv = acos(del);
    double otv_kon = otv * 180 / pi;
    return (int)otv_kon;
}
