#include <stdio.h>

int clear_nth_bit(int number, int position){
    return number & ~(1 << position);
}

int main() {
    int num,pos;
    scanf("%d %d", &num, &pos);
    int result= clear_nth_bit(num,pos);
    printf("%d", result);
    return 0;
}