// Date: 14/9/2024
//Enter salary from the keyboard. Display information as follows

#include<stdio.h>
int main(){
    // create variables
    float salary;
    //enter salary from the keyboard and large than 0
    do {printf ("Enter salary: ");
    scanf("%f", &salary);
    } while (salary < 0);

    // display information with condition
    if (salary>100000000){
        printf("Salary of the company's management board !\n");
    } else if (salary>=80000000 & salary<100000000){
        printf ("Salary of management level in the company !");
    } else if (salary>=50000000 & salary<80000000){
        printf ("Salary of middle management level in the company !");
    } else if (salary>=30000000 & salary<50000000){
        printf ("Salary of department head in the company !");
    } else {printf ("Salary of employee in the company !");}

    return 0;
}