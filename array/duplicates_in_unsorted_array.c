#include<stdio.h>

int main(){
	int i, j, len, count, A[] = {1,2,2,2,2,3,3,4,4,4,5,7,7,6, 1,1,1, };
	len = sizeof(A)/sizeof(A[0]);
	
	printf("\nOriginal Array is: ");
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	
	for(i=0;i<len-1;i++){
		count = 1;
		if(A[i] != -1){
			for(j=i+1;j<len;j++){
				if(A[i] == A[j]){
					count++;
					A[j] = -1;
				}
			}
		}
		if(count > 1)
			printf("\n%d appeared %d times\n", A[i], count);
	}
	
	return 0;
}
