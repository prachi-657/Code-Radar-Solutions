#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }
        int num = 1;
        for (int k = 1; k <= (i+1); k++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}
