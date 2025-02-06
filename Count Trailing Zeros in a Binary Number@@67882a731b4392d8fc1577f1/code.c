#include <stdio.h>

int countingTrailingZeroes(int n) {
    int count = 0;

    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1; 
    }

    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Number of trailing zeroes: %d\n", countingTrailingZeroes(n));
    return 0;
}
