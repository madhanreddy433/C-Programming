#include<stdio.h>
int main(){
    int i, j, a[10][10], b[10][10], sum[10][10], r, c;
    printf("enter no of rows (between 1 to 10):");
    scanf("%d", &r);
    printf("enter no of columns (between 1 to 10):");
    scanf("%d", &c);

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("enter a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("enter b[%d][%d]:", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("elements of sum matrix are:\n");
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}