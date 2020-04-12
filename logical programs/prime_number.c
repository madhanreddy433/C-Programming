#include <stdio.h>

int main(){
	int num, i, flag =0;
	printf("enter a number:");
	scanf("%d", &num);
	
	for(i=2;i<=num/2;i++){
		if(num%i == 0){
			flag += 1;
		}
	}
	if(flag>=1){
		printf("%d is not a prime number", num);
	}else{
		printf("%d is a prime number", num);
	}
	return 0;
}
