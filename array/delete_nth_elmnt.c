#include<stdio.h>

int main(){
	int i, A[10], len, index;
	
	for(i=0;i<10;i++){
		A[i] = i;
	}
	
	len = sizeof(A)/sizeof(A[0]);
	
	printf("\noriginal array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	
	printf("\nenter an index to delete: ");
	scanf("%d", &index);
	
	if(index > len){
		printf("\nenter valid index\(less than %d\): ", len);
		scanf("%d", &index);
	}else{
		for(i=index;i<len;i++){
		A[i] = A[i+1];
		}
		len--;
	
		printf("\nafter deleting element at index %d array is: ", index);
		for(i=0;i<len;i++){
			printf("%d ", A[i]);
		}	
	}
		
	return 0;
}
