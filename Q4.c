// Date: 14/9/2024
//  Enter x, y, z from the keyboard. Calculate the value of expression A 
// and print the result to the screen

#include <stdio.h>

int main() {
    // make variables
    int x, y, z;

    // get input from user
    printf("Enter x: ");
    scanf("%d", &x);

    printf("Enter y: ");
    scanf("%d", &y);

    printf("Enter z: ");
    scanf("%d", &z);

    // calculate A
    int A = (--x + --y + z--) *2 + ++y*2;

    // print the result 
    printf("The result is: %d\n", A);

    return 0;
}