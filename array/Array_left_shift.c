#include<stdio.h>

int main(){
	int i, len, tmp, A[] = {1,2,3,4,5,6};
	len = sizeof(A)/sizeof(A[0]);
	
	printf("\nOriginal Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	
	tmp = A[0];
	
	for(i=0;i<len;i++){
		A[i] = A[i+1];
	}
	A[len-1] = tmp;
	
	printf("\nAfter left shifting one time Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
		
	return 0;
}
