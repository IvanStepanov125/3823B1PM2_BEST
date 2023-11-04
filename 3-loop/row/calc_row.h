long long calc_row(int n, long long k){
    long long int sum = 0;
    long long int verh = 9223372036854775807;
    long long int niz = 9223372036854775807 * (-1);
    long long int t = 0;
    if (k > 0){
        for (int i = 1; i < n + 1; i++){
            t = i * k;
            if (verh - t > 0){
                verh -= t;
                sum += t;
                }
            else 
                return 0;    
        }
    }
    else if (k < 0){
        for (int i = 1; i < n + 1; i++){
            t = i * k;
            if ((niz + t * (-1)) < 0){
                niz += (-1) * t;
                sum += t;
                }
            else 
                return 0;    
        }
    }
    return sum;
}