/*
*
**
***
****
*/
/*
#include<stdio.h>
int main(){
    int i, j, rows;
    printf("enter no of rows:");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
1
22
333
4444
*/
/*
#include<stdio.h>
int main(){
    int i, j, rows;
    printf("enter no of rows:");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
*/
/*
1
12
123
1234
*/
#include<stdio.h>
int main(){
    int i, j, rows;
    printf("enter no of rows:");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}