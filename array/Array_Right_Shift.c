#include<stdio.h>

int main(){
	int i, len, tmp, A[] = {1,2,3,4,5,6};
	len = sizeof(A)/sizeof(A[0]);
	
	printf("\nOriginal Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	
	tmp = A[len-1];
	
	for(i=len-1;i>0;i--){
		A[i] = A[i-1];
	}
	A[0] = tmp;
	
	printf("\nAfter left shifting one time Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
		
	return 0;
}
