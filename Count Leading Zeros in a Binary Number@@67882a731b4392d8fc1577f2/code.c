#include <stdio.h>

int countingleadingzeroes(int n) {
    int count =0;
    for (int i=31; i>=0; i--){
        if ((n>>1)& 1){
            break;
        }
        count++;
    }
    return count;
}

int main(){
    unsigned int n;
    scanf("%d", &n);
    printf("%d\n", countingleadingzeroes(n));
    printf("%d", count);
    return 0;
}