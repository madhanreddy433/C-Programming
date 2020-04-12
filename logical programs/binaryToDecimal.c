#include<stdio.h>
#include<math.h>

int binToDec(int n){
    int i = 0, sum = 0;

    while(n>0){
        sum = sum + (n%10)*pow(2, i);
        n /= 10;
        i++;
    }

    return sum;
}
#if 0
int power(int x, int y){
    int i, prod = 1;
    for(i=1;i<=y;i++){
        prod *= x;
    }
    return prod;
}
#endif
int main(){
    long int n;
    printf("enter any binary number:");
    scanf("%ld", &n);
    printf("equivalent decimal value is: %d\n", binToDec(n));

    return 0;
}