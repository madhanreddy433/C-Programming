#include<stdio.h>

int main(){
    int basic_salary, gross_salary, dearness_allowance, hra;
    printf("enter the basic salary:");
    scanf("%d", &basic_salary);

    dearness_allowance = 0.4*basic_salary;
    hra = 0.2*basic_salary;

    gross_salary = basic_salary + dearness_allowance + hra;

    printf("gross salary with basic salary %d is %d", basic_salary, gross_salary);
}