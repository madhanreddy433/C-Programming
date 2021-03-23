#include<stdio.h>

int main(){
	int i, j, len, tmp, A[] = {1,2,2,2,2,3,3,4,4,4,5,6};
	len = sizeof(A)/sizeof(A[0]);
	
	printf("\nOriginal Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	
	for(i=0;i<len-1;i++){
		if(A[i] == A[i+1]){
			j = i+1;
			while(A[i] == A[j]){
				j++;
			}
			printf("\n%d appeared %d times\n", A[i], j-i);
			i = j-1;
		}
	}
	
	return 0;
}
