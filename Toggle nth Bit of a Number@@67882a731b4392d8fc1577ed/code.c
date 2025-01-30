#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num,&pos);
    int result= num^(1<< pos);
    printf("%d",result);
    return 0;
}