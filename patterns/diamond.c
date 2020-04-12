#include<stdio.h>
int main(){
    int i, j, k, rows;
    printf("enter the no of rows:");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        for(k=1;k<=rows-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        for(j=2;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=2;i<=rows;i++){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=rows;j>=i;j--){
            printf("*");
        }
        for(j=2;j<=rows-i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}