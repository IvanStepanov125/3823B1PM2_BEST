unsigned char max_byte(unsigned short x) {
    unsigned char b = (unsigned char)x;
    unsigned char c = (unsigned char)(x >> 8);
    if (b > c) return b;
    else return c;
}
