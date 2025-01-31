#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    int result;
    result= (b>>a);
    printf("%d",result);
    return 0;
}