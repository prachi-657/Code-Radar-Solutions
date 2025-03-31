#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {          // Outer loop for rows
        for (int j = 1; j <= i; j++) {      // Inner loop for numbers
            printf("%d ", j);               // Print numbers
        }
        printf("\n");                       // Move to next row
    }
    return 0;
}
