#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for mirroring
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print asterisks for the triangle
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
