#include <stdio.h>

int countingleadingzeroes(unsigned int n) {
    int count =0;
    for (int i=31; i>=0; i--){
        if ((n>>i)& 1){
            break;
        }
        count++;
    }
    return count;
}

int main(){
    unsigned int n;
    scanf("%u", &n);
    printf("%d\n", countingleadingzeroes(n));
    return 0;
}