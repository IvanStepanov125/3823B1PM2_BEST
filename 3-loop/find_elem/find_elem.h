#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0;
    int flag = 1;
    int c = 0, le = left, ri = right, poisk = number;
    while (flag > 0){
        c = (le + ri) / 2;
        i += 1;
        if (c == poisk)
            return i * (poisk - left);
        else if (c < poisk)
            le = c + 1;
        else if (c > poisk)
            ri = c - 1;  
    }
    return i * (poisk - left); //НЕ МЕНЯТЬ!
}