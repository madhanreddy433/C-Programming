#include<stdio.h>

int main(){
	int mid, low, high, key, len, found = 0, A[] = {2,3,9,16,18,21,28,32,35};
	
	len= sizeof(A)/sizeof(A[0]);
	
	printf("enter key to search: ");
	scanf("%d", &key);
	low = 0; high = len-1;

	while(low < high){
		mid = (low+high)/2;
		if(key == A[mid]){
			found = 1;
			break;
		}else if(key < A[mid]){
			high = mid -1;
		}else{
			low = mid + 1;
		}
	}
	
	if(found == 1){
		printf("Found at index %d\n", mid);
	}else{
		printf("\nNot Found\n");
	}
	return 0;
}
