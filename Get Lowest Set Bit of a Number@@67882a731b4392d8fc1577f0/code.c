#include <stdio.h>

int main() {
    int a;
    int position=0;
    scanf("%d", &a);
    while ((a & 1)==0 && a!=0){
        a>>=1;
        position++;
    }
    if (a==0){
        printf("No set bit found");
    }else{
        printf("%d",position);
    }
    return 0;
}