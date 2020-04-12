#include<stdio.h>

void decToBin(int n){
    int binaryNum[32];
    int i = 0, j;
    while(n>0){
        binaryNum[i] = n%2;
        n /= 2;
        i++;
    }
    for(j=i-1; j>=0; j--){
            printf("%d ", binaryNum[j]);
    }
    return;
}
int main(){
    int n;
    printf("enter the number to convert:");
    scanf("%d", &n);
    decToBin(n);
    return 0;
}