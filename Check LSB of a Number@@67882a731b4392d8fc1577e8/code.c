#include <stdio.h>

int main() {
    int a;
    scnaf("%d", &a);
    if (a&1){
        printf("Set");
    }else{
        printf("Not Set");
    }
    return 0;
}