#include <stdio.h>

int main(){
	int limit, num, last_digit, sum, tmp; 
	
	printf("enter the limit:");
	scanf("%d", &limit);
	
	for(num = 0;num<=limit;num++){
		sum = 0;
		tmp = num;
		while(tmp>0){
			last_digit = tmp%10;
			sum = sum + last_digit*last_digit*last_digit;
			tmp /= 10;
		}
		if(sum == num){
			printf("%d ", num);
		}
	}
	
	return 0;
}
