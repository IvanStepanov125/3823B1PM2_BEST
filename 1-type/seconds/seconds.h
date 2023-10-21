int get_years(int seconds) {
    int y;
    y = seconds / (60 * 60 * 24 * 372);
    return 1970 + y;
}

int get_month(int seconds) {
    int y;
    y = seconds / (60 * 60 * 24);
    y = (y % 372) / 31;
    return y; 
}

int get_day(int seconds) {
    int y;
    y = seconds / (60 * 60 * 24);
    y = (y % 372) % 31;
    return y; 
}

int get_hours(int seconds) {
    int y;
    y = seconds / (60 * 60 );
    y = y % 24;
    return y;  
}

int get_minutes(int seconds) {
    int y;
    y = seconds / 60;
    y = y % 60;
    return y;
}

int get_seconds(int seconds) {
    return seconds % 60; 
}


int get_magical_value(int seconds) {
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    int otv;
    otv = ((year + month) / (1 + day + second)) * ((year + month) / (1 + day +second)) + ((minutes + (minutes / (1 + hours))) / (1 + hours));
    return otv;
}