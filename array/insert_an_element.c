#include <stdio.h>

int main(){
    int i,j, position, element;
    int a[5];

    for(i=0;i<5;i++){
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("entered array is \n");
    for(i=0;i<5;i++){
        printf(" %d ", a[i]);
    }

    printf("enter the position and element to insert");
    scanf("%d%d", &position, &element);

    for(i=4; i>=position; i--){
        a[i+1] = a[i];
    }
    a[position] = element;

    printf("array after insertion is \n");
    for(i=0;i<=5;i++){
        printf(" %d ", a[i]);
    }
    return 0;
}