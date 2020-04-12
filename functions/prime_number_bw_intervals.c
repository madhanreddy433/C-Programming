#include<stdio.h>
#include<stdbool.h>
bool isPrime(int);
int main(){
    int min, max, i;
    printf("enter lower and upper limits:");
    scanf("%d %d", &min, &max);
    for(i=min;i<=max;i++){
        if(isPrime(i)){
            printf("%d ", i);
        }
    }
    return 0;
}
bool isPrime(int num){
    int i, flag = 0;
    for(i=2;i<=num/2;i++){
        if(num%i == 0){
            ++flag;
        }
    }
    if(flag){
        return false;
    }else{
        return true;
    }
}