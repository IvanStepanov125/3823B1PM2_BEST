int get_time(long long angle) {
    int y = angle;
    int x = y / 6;
    int sek = x % 60;
    int minut = (x / 60) % 60;
    int chas = x / 3600;
    return chas * 10000 + minut * 100 + sek;
}