#include <stdbool.h>


bool is_digit(char x) {
    int y = x;
    if (x == "") return false;
    else if ((48 <= y) && (y <= 57))
        return true;
    else return false;
}

bool is_letter(char x) {
    int y = x;
    if (((65 <= y) && (y <= 90)) || ((97 <= y) && (y <= 122)))
        return true;
    else return false;
}

bool is_punctuation(char x) {
    int y = x;
    if (((33 <= y) && (y <= 47)) || ((58 <= y) && (y <= 64)) || ((91 <= y) && (y <= 96)) || ((123 <= y) && (y <= 126)))
        return true;
    else return false;
}

int get_ascii_code(char first, char second, char third) {
    int x = first, y = second, z = third;
    int otv;
    otv = x * 1000000 + y * 1000  + z;
    return otv; 
}

