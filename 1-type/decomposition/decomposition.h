int reverse(int number) {
    int x = number; // 1234
    int x1, x2, x3, x4;
    x4 = x % 10;  //4
    x3 = (x % 100) / 10; // 3
    x2 = (x % 1000) / 100; // 2
    x1 = (x % 10000) / 1000; //1
    return x4 * 10 * 10 * 10 + x3 * 10 * 10 + x2 * 10 + x1;
}

double decomposition(int number) {
    int x = number;
    int x1, x2, x3, x4;
    x4 = x % 10;
    x3 = (x % 100) / 10;
    x2 = (x % 1000) / 100;
    x1 = (x % 10000) / 1000;
    double otv;
    otv = 4.0 / (1.0 / (x1 * 10 * 10 * 10) + 1.0 / (x2 * 10 * 10) + 1.0 / (x3 * 10) + 1.0 / x4);
    return otv; 
}

int append(int number, int start, int end) {
    int otv;
    otv = (start * 100000 + number * 10 + end) * ((number >= 0) && (start >= 0) && (end >= 0))  +  (start * 100000 - number * 10 - end) * ((number < 0) || (start < 0) || (end < 0));
    return otv;
}
