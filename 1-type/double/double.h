#include <math.h>
bool compare_double(double x, double y) {
    double e = 0.00000001;
    if (fabs(x - y) < e) return true;
    else return false;
}

int get_nearest_int(double x) {
    int y = x;
    if (((x - y) >= 0.5) && (x > 0)) return (y + 1);
    else if (((x - y) <= -0.5) && (x < 0)) return (y - 1);
    else return y;
}

double get_fractional(double x) {
    return x - floor(x);
}
