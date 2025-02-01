#include <stdio.h>

if get_nth_bit(int number, int position){
    return (number>> position) & 1;
}

int main() {
    int num,pos;
    scanf("%d %d", &a,&b);
    scanf("%d", &num);
    scanf("%d", &pos);
    int bit_value= get_nth_bit(num,pos);
    printf("%d", pos,bit_value);
    return 0;
}