int icecream(int x){
    if (x == 0)
        return 0;
    else if ((x % 3 == 0) || (x % 5 == 0))
        return 1;
    else if (((x % 5 == 3) || (x % 5 == 1)) && (x > 5))
        return 1;
    else 0;
}