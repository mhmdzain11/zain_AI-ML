//c program to read the integer value as input from the user and find the count of digits
#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        count = 1;
    } else {
        while (number != 0) {
            number /= 10;
            count++;     
        }
    }

    printf("The number of digits is: %d\n", count);

    return 0;
}
