#include<stdio.h>

int main(){
	int i, j, k, a_len, b_len, A[] = {1,4,6,8}, B[] = {2,3,5,7,9}, C[20];
	
	a_len = sizeof(A)/sizeof(A[0]);
	b_len = sizeof(B)/sizeof(B[0]);
	
	i=0;j=0;k=0;
	while(i < a_len && j < b_len){
		if(A[i] < B[j]){
			C[k] = A[i];
			i++;k++;
		}else{
			C[k] = B[j];
			k++;j++;
		}
	}
	
	for(;i<a_len;i++){
		C[k] = A[i];
		k++;
	}
	
	for(;j<b_len;j++){
		C[k] = B[j];
		k++;
	}
	
	printf("\nArray A is: ");
	for(i=0;i<a_len;i++){
		printf("%d ", A[i]);
	}
	
	printf("\nArray B is: ");
	for(i=0;i<a_len;i++){
		printf("%d ", B[i]);
	}
	
	printf("\nAfter Merging A and B: ");
	for(i=0;i<a_len+b_len;i++){
		printf("%d ", C[i]);
	}
}
