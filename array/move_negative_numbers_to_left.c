#include<stdio.h>

int main(){
	int i, j, len, tmp, A[] = {1, -2, 5, -3, -6};
	len = sizeof(A)/sizeof(A[0]);
	
	i=0;j=len-1;
	while(i<j){
		while(A[i] < 0){
			i++;
		}
		while(A[j] > 0){
			j--;
		}
		tmp = A[i];
		A[i] = A[j];
		A[j] = tmp;
		i++;
		j--;
	}
	
	for(i=0;i<len;i++){
		printf("%d ", A[i]);
	}
	return 0;
}
