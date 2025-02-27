#include <stdio.h>

int main() {
    int r,c;
    scanf("%d %d", &r,&c);
    for (int i = 1; i < r; i++) {
        for (int j = i; j < c; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
