// Date: 14/9/2024
// Enter from the keyboard n numbers (any n). Do the calculation and print it out

#include <stdio.h>
#include <math.h>

int main(){
    // make variables
    int n;
    float sum=0;
    float product=1;

    // input number of numbers and input the numbers
    printf("Enter n: ");
    scanf("%d", &n);
    int str[n];
    int i;
    for (i=0 ; i < n ; i++){
        printf("Number of %d: ",i+1);
        scanf(" %d", &str[i]);
        sum += str[i];
        product *= str[i];
    }
    //calculate
    float avr_sum = sum/n;
    float avr_product = pow(product, 1.0/n); // 1.0/n la mu nghich dao = can 

    // print output
    printf("\nAverage of the sum of the entered numbers: %.3f\n", avr_sum);
    printf("\nAverage of the products of the entered numbers: %.3f", avr_product);
    
    return 0;
}
