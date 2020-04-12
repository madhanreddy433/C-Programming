/*
****
 ***
  **
   *
*/
/*
#include<stdio.h>
int main(){
    int i, j, k, rows;
    printf("enter the no of rows:");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        for(k=1;k<i;k++){
            printf(" ");
        }
        for(j=i;j<=rows;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/

#include<stdio.h>
int main(){
    int i, j, k, rows;
    printf("enter the no of rows:");
    scanf("%d", &rows);

    for(i=0;i<=rows;i++){
        for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=i;j<rows;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}