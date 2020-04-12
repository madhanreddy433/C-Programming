/*

****
***
**
*

*/
/*
#include<stdio.h>
int main(){
    int i, j, rows;
    printf("enter the no of rows:");
    scanf("%d", &rows);

    for(i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
#include<stdio.h>
int main(){
    int i, j, rows;
    printf("enter the no of rows:");
    scanf("%d", &rows);

    for(i=0;i<=rows;i++){
        for(j=rows-i;j>=1;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

