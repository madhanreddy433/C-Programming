#include <stdio.h>
int main(){
	int i, sum, limit, j;
	
	printf("enter the limit:");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		sum = 0;
		for(j = 1;j<i;j++){
			if(i%j == 0){
				sum = sum+j;
			}
		}
		if(sum == i){
			printf("%d, ", i);
		}
	}
	return 0;
}
