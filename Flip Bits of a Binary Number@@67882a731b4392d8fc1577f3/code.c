#include <stdio.h>

unsigned int flipBits(unsigned int num) {
    return ~num;
}
int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    unsigned int flippedNum = flipBits(num);
    printf("Flipped number: %u\n", flippedNum);
    return 0;
}