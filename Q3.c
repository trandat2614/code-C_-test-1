// Date: 14/9/2024
//Enter 4 numbers one after another from the keyboard. Execute and print to screen

#include <stdio.h>

int main() {
    // make variables 
    int arr[10];
    int sum = 0;
    int product = 1;
    int i;
    // input 4 numbers and calculate sum, product
    for (i=0; i<4; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
        product *= arr[i];
    }

    // find the minimum and maximum number
    int min = arr[0];
    int max = arr[0];
    printf("%d", max);
    for (i=0;i<4;i++) {
        if (arr[i] < min) {
            min= arr[i];
    	}
    	if (arr[i] > max) {
            max= arr[i];
    	}
    }

    // print the result
    printf("The largest number is the one: %d\n",max);
    printf("The smallest number is the one: %d\n",min);
    printf("Total of 4 numbers: %d\n", sum);
    printf("The product of 4 numbers: %d\n", product);

    return 0;
}
