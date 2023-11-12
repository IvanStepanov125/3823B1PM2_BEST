#include <math.h>

unsigned int little_big_convert(unsigned int input){
    unsigned char b1 = (unsigned char)(input >> 24);
    unsigned char b2 = (unsigned char)(input >> 16);
    unsigned char b3 = (unsigned char)(input >> 8);
    unsigned char b4 = (unsigned char)input;
    return b4 *256*256*256 + b3 * 256 * 256 + b2 * 256 + b1;
}