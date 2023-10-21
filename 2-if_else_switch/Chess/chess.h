int chess_rook(char a, int b, char c, int d){
    int bukva1 = a, chislo1 =  b, bukva2 = c, chislo2 = d;
    if ((bukva1 <= 64) || (bukva1 >= 73) || (bukva2 <= 64) || (bukva2 >= 73) || (chislo1 >= 9) || (chislo2 >= 9))
        return 0;
    else if ((bukva1 == bukva2) && (chislo1 == chislo2))
        return 0;
    else if (bukva1 == bukva2)
        return 1;
    else if (chislo1 == chislo2)
        return 1;
    else
        return 0;
}