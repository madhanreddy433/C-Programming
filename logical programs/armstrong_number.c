#include<stdio.h>

int main(){
	int num, tmp, last_digit, sum = 0;
	printf("enter a number:");
	scanf("%d", &num);
	tmp = num;
	while(num>0){
		last_digit = num%10;
		sum = sum + last_digit*last_digit*last_digit;
		num /= 10;
	}
	if(sum == tmp){
		printf("entered number %d is an armstrong number!", tmp);
	}else{
		printf("entered number %d is not an armstrong number!", tmp);
	}
	
	return 0;
}
