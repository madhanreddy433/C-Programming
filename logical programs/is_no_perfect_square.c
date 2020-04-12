#include<stdio.h>
#include<math.h>

int main(){
    int num, iVar;
    float fVar;

    printf("enter a number:");
    scanf("%d", &num);

    fVar = sqrt(num);
    iVar = (int)fVar;

    if(iVar == fVar){
        printf("%d is a perfect square number", num);
    }else{
        printf("%d is not a perfect square number", num);
    }
    return 0;
}