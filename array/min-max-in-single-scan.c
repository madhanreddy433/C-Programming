#include<stdio.h>

int main(){
	int A[10] = {1, 2, 3, 11, -1, 23, 33, 4, 5, 6}, i, min, max;
	min = A[0]; max = A[0];
	
	for(i=1;i<10;i++){
		if(A[i] < min){
			min = A[i];
		}else if(A[i] > max){
			max = A[i];
		}
	}
	
	printf("min: %d max: %d\n", min, max);
	
	return 0;
}
