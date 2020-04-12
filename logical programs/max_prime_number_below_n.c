#include <stdio.h>
int main(){
    int limit, num, i, count, maxPrime = 1;
    printf("enter limit:");
    scanf("%d", &limit);
    for(num=1;num<=limit;num++){
        count = 0;
        for(i=1;i<=num;i++){
            if(num%i == 0){
                count += 1;
            }
        }
        if(count == 2){
            printf("%d ", num);
            if(maxPrime < num){
                maxPrime = num;
            }
        }
    }
    printf("\nmaximum prime number below %d is %d", limit, maxPrime);
    return 0;
}