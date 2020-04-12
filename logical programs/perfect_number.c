/* check whether entered number is perfect or not */

#include <stdio.h>

int main(){

	int num,sum = 0,i;
	printf("enter a number:");
	scanf("%d", &num);

	for(i=1;i<num;i++){
		if(num%i == 0){
			sum += i;
		}
	}
	if(num == sum){
		printf("entered number %d is perfect number", num);
	}

	return 0;
}
