#include<stdio.h>
int main(){
    int i, j, a[10][10], transpose[10][10], r, c;
    printf("enter rows of a matrix:");
    scanf("%d", &r);
    printf("enter columns of a matrix:");
    scanf("%d", &c);

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            transpose[j][i] = a[i][j];
        }
    }

    printf("entered matrix is \n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\ntranspose of entered matrix is \n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}