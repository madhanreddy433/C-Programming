#include<stdio.h>

int main(){
	int i, len, tmp, sorted = 0, A[] = {1,2,1,3,4,5,6};
	len = sizeof(A)/sizeof(A[0]);
	
	printf("\nOriginal Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	
	for(i=0;i<len-1;i++){
		if(A[i]>A[i+1]){
			sorted = 1;
			break;
		}
	}
	if(sorted == 1){
		printf("\nArray is not Sorted\n");
	}else{
		printf("\nArray is Sorted\n");	
	}
	
	return 0;
}
