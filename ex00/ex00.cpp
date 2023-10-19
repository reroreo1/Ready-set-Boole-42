unsigned int add(unsigned int x, unsigned int y) {
    unsigned int carry;
    while (y != 0) {
        carry = x & y;
        x = x ^ y;
        y = carry << 1;
    }
    return x;
}
