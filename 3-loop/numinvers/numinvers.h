int num_invers(int num){
    int x = num;
    int raz = 0;
    int y = num;
    if (x < 0)
        return 0;
    while (y > 0){
        raz += 1;
        y /= 10;
    }
    int mas[raz];
    int i = 0, otv = 0;
    while (x > 0){
        mas[i] = x % 10;
        x /= 10;
        i += 1;
    }
    for (int j = 0; j < raz; j ++){
        int t = 1;
        for (int k = 0; k < (raz - j - 1); k++){
            t *= 10;
        }
        otv += mas[j] * t;
    }
    return otv;
}