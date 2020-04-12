#include<stdio.h>
int main(){
    int i, j, k, a[10][10], b[10][10], mul[10][10], r1, c1, r2, c2;
    
    printf("enter the rows and column for matrix a: ");
    scanf("%d %d", &r1, &c1);
    printf("enter the rows and column for matrix b: ");
    scanf("%d %d", &r2, &c2);
    
    //Taking input until columns of the first matrix is equal to the rows of the second matrix
    while(c1 != r2){
        printf("Error! Enter rows and columns again.\n");
        printf("Enter rows and columns for the matrix a: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and columns for the matrix b: ");
        scanf("%d%d", &r2, &c2);
    }

    for(i=1;i<r1;i++){
        for(j=1;j<=c1;j++){
            printf("enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i=1;i<=r2;i++){
        for(j=1;j<=c2;j++){
            printf("enter b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    //Initializing elements of matrix mult to 0.
    for(i=1;i<=r1;i++){
        for(j=1;j<=c2;j++){
            mul[i][j] = 0;
        }
    }
    for(i=1;i<=r1;i++){
        for(j=1;j<=c2;j++){
            for(k=1;k<=c1;k++){
                mul[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    printf("multiplication of matrices is\n");
    for(i=1;i<=r1;i++){
        for(j=1;j<=c2;j++){
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }

    return 0;
}