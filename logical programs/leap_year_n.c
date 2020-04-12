#include<stdio.h>

int main(){
    int limit, yr;

    printf("enter limit:");
    scanf("%d", &limit);

    for(yr=1;yr<=limit;yr++){
        if((yr%400 == 0) || ((yr%4 == 0)&&(yr%100 != 0))){
            printf("%d ", yr);
        }
    }
    return 0;
}