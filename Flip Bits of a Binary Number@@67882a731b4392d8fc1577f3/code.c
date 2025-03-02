#include <stdio.h>

int flipBits(int num) {
    return ~num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int flippedNum = flipBits(num);
    printf("Flipped number: %d\n", flippedNum);

    return 0;
}
