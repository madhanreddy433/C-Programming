#include<stdio.h>

int main(){
int num, tmp1, last_digit;

printf("enter the number:");
scanf("%d", &num);

tmp1 = num;
while(num > 0){
    last_digit = num%10;
    tmp2 = num/10;

    count = 1;

    while(tmp2 > 0){
        if(last_digit == tmp2%10){
            count ++;
        }
        tmp2 /= 10;
    }
    num /= 10;
}
return;
}