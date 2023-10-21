#include <math.h>

int get_score(short score, int start, int stop, int now) {
    double raznica = ((double)score / 2) / (stop - start);
    printf("%lf\n", raznica);
    if (now <= start){
        return score;
        }
    if (now > stop){
        return (int)ceil((double)score / 2);
        }
    else{
        return (int)ceil(score - (raznica * (now - start)));
        } 
}
