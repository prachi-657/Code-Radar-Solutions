#include <stdio.h>

int main() {
    int  num,sum=0,total_sum;
    scanf("%d", &num);
    for (i=1;i<=num;i++){
        sum+=sum;
        total_sum=sum;
    }
    printf("%d", total_sum);
    return 0;
}