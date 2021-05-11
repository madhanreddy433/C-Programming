#include<stdio.h>

int main(){
	int A[10] = {2, 4, 5, 6, 8, 9, 10, 12, 23, 30}, i, j, len, key;
	
	printf("enter the key: ");
	scanf("%d", &key);
	
	len = sizeof(A)/sizeof(A[0]);
	i=0; j = len-1;
	
	while(i<j){
		if(A[i]+A[j] == key){
			printf("A[%d] + A[%d] = %d\n", i, j, key);
			i++;j--;
		}else if(A[i]+A[j] < key){
			i++;
		}else{
			j--;
		}
	}
	return 0;
}
