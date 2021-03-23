#include<stdio.h>

int main(){
	int i, j, len, num, A[] = {1,2,4,5,6};
	len = sizeof(A)/sizeof(A[0]);
	
	printf("\nOriginal Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	
	printf("enter an element to insert: ");
	scanf("%d", &num);
	
	i = len -1;
	while(A[i] > num){
		A[i+1] = A[i];
		i--;
	}
	A[i+1] = num;
	len++;
	
	printf("\nafter inserting %d in above araay: ", num);
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	return 0;
}
