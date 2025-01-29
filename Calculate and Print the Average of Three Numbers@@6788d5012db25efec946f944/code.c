#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int average;
    average=((a+b+c)/3);
    float avg=(float)average;
    printf("Average: %f", avg);
    return 0;
}