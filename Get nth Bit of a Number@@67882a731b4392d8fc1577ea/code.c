#include <stdio.h>

int get_nth_bit(int number, int position){
    return (number >> position) & 1;
}

int main() {
    int num,pos;
    scanf("%d %d", &num, &pos);
    int bit_value= get_nth_bit(num,pos);
    printf("%d", bit_value);
    return 0;
}