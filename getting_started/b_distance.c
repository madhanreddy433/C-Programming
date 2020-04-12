#include<stdio.h>
int main(){
    float km, m, cm, ft, inch;
    printf("enter the distance in kilometers:");
    scanf("%f", &km);

    m = km*1000;
    cm = m*100;
    inch = cm/2.54;
    ft = inch/12;

    printf("distance in kilometers is: %f\n", km);
    printf("distance in meters is: %f\n", m);
    printf("distance in centimeters is: %f\n", cm);
    printf("distance in inches is: %f\n", inch);
    printf("distance in feets is: %f\n", ft);
    
    return 0;
}