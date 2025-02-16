#include <stdio.h>

int main() {
    int year;
    
    // Read the input year
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Check if the year is a leap year
    if (year % 400 == 0) {
        printf("Leap Year");
    } else if (year % 100 == 0) {
        printf("Not a Leap Year");
    } else if (year % 4 == 0) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
    
    return 0;
}
