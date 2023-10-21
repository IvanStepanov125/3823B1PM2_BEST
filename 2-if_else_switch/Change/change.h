long long change(int a, int b, int c, int d){
    long long int f = c;
    long long int stoum = a * 100 + b;
    long long int kol  = f * 100 + d;
    long long int sdacha = kol - stoum;
    if (sdacha < 0)
        return -1;
    else 
        return 100 * (sdacha / 100) + (sdacha % 100);
    
}