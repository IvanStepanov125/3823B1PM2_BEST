#include <math.h>

int nod(int first, int second){
    if ((first <= 0) || (second <= 0))
        return -1;
    else if (first == second)
        return first;
    else{
        int ma = fmax(first, second);
        int mi = fmin(first, second);
        return nod(mi, ma - mi);
    }
}
