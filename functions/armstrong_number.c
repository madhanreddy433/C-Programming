#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isArmstrong(int num);
int main(){
    int num;
    printf("enter the number to check:");
    scanf("%d", &num);

    if(isArmstrong(num)){
        printf("%d is armstrong number!\n", num);
    }else{
        printf("%d is not an armstrong number!\n", num);
    }
    return 0;
}

bool isArmstrong(int num){
    int n=0, tmp, sum = 0;
    tmp = num;

    while(tmp != 0){
        tmp /= 10;
        n++;
    }
    tmp = num;
    while(tmp != 0){
        sum += pow(tmp%10, n);
        tmp /= 10;
    }
    if(sum == num){
        return true;
    }else{
        return false;
    }
}