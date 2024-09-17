// Date: 14/9/2024
// Enter from the keyboard the student's information

#include <stdio.h>

int main() {
    //make new variables
    char name[50];
    char classroom[50];
    char std_code[50]; 
    int age;
    // enter variables
    printf("Please enter Student name: ");
    scanf("%s", name);

    printf("Please enter Classroom: ");
    scanf("%s", &classroom);

    printf("Please enter your Student code: ");
    scanf("%s", &std_code);

    printf("Please enter the student's age: ");
    scanf("%d", &age);

    //print information
    printf("\nHello everyone!\n");
    printf("My name: %s\n", name);
    printf("Classroom: %s\n", classroom);
    printf("Student Code: %s\n", std_code);
    printf("My age: %d", age);

    return 0;
}