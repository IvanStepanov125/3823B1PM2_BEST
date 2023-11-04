long fib(int m){
    int chislo = m;
    if (chislo < 0)
        return -1;
    int sum = 2;
    int per = 0;
    int f1 = 1, f2 = 1;
    while (f2 <= chislo){
        per = f1 + f2;
        f1 = f2;
        f2 = per;
        sum += per;
    }
    return sum - f2;
}