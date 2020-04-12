#include <stdio.h>
int main(){
    int num, rev = 0, sum_dig = 0, tmp1, tmp2;

    printf("enter a number:");
    scanf("%d", &num);
    tmp1 = num;
    while(num>0){
        sum_dig = sum_dig + num%10;
        num /= 10;
    }
    tmp2 = sum_dig;
    while(sum_dig>0){
        rev = rev*10 + sum_dig%10;
        sum_dig /= 10;
    }
    if(tmp1 == tmp2*rev){
        printf("%d is magic number!", tmp1);
    }
    else{
        printf("%d is not magic number", tmp1);
    }
    return 0;
}