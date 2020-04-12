/* (20°C × 9/5) + 32 = 68°F  */

#include<stdio.h>

int main(){
    float cel, far;

    printf("enter temperature in celsius:");
    scanf("%f", &cel);

    far = (cel*9/5) + 32;

    printf("fahrenheit is %f", far);
    return 0;
}