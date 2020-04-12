/*
   *
  **
 ***
****
*/

#include<stdio.h>

int main(){
    int rows, i, j, k;
    printf("enter the no ofrows:");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        for(j=rows-i;j>=1;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}