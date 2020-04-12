#include <stdio.h>

int factorial(int i){

    if(i <= 1)
        return;
    return i*factorial(i-1);
}

int main(){
    int num = 4;

    printf("factorial: %d\n", factorial(num));
    return 0;
}