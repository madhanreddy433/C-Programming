#include<stdio.h>
#include<stdarg.h>

int avg(int count, ...);
int main(){
    printf("average is: %d\n", avg(3,1,2,3));   //first parameter is the nof arguments passing
    printf("average is: %d\n", avg(4,1,2,3,4));
    printf("average is: %d\n", avg(5,1,2,3,4,5));
    return 0;
}

int avg(int count, ...){
    int sum = 0, i;

    va_list lst;    //declare a variable of type va_list
    va_start(lst, count);   //initialize the list
    for(i=1;i<=count;i++){
        int n = va_arg(lst, int);    //second parameter is the data type of list elements
        sum += n;
    }
    return sum/count;
}