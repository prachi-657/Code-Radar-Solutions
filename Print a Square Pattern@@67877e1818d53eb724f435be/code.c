#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c); // Input rows and columns
    for (int i = 1; i <= r; i++) { 
        for (int j = 1; j <= c; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
