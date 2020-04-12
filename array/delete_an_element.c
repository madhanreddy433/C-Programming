/*  TO-DO  */

#include<stdio.h>

int main(){
    int A[5], i, j, num, count = 0;
    
    for(i=0;i<5;i++){
        printf("enter A[%d]:", i);
        scanf("%d", &A[i]);
    }
    printf("enter an element to delete:");
    scanf("%d", &num);

    for(i=0;i<5;i++){
        if(A[i] == num){
            count += 1;
            printf("i: %d\tcount: %d\n", i, count);
            for(j=i;j<5;j++){
                A[j] = A[j+1];
            }
            // for(i=0;i<5-count;i++){
            //     printf("A[%d]: %d\t", i, A[i]);
            // }
            i -= 1;     //TO-DO
        }
    }
    printf("%d is appeared %d times and deleted\n", num, count);

    for(i=0;i<(5-count);i++){
        printf("A[%d]: %d\n", i, A[i]);
    }
    return 0;
}