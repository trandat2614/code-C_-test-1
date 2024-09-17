// Date: 14/9/2024
// //Write a program to print numbers in the range 1 - 100 that are 
// divisible by 3 but not divisible by 5. Count how many numbers are in the range 
// 1 - 100 that are divisible by 3 but not divisible by 5

#include <stdio.h>

int main() {
    //create variables
    int count = 0;
    // print numbers %3==0 and % 5 != 0, count number of numbers
    printf("The number divisible by 3 but not divisible by 5 in range 1-100 is: "); 
    int i;
    for (i=0; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            printf("%d ", i);
            count ++;
        }
    }

    printf("\nTotal number between 1-100 divisible by 3 but not by 5: %d\n", count);

    return 0;
}
