#include<stdio.h>

int main(){
	int num, last_digit, tmp1, tmp2, count;
	
	printf("enter a number:");
	scanf("%d", &num);
	tmp1 = num;
	while(num>0){
		last_digit = num%10;
		tmp2 = num/10;
		count = 1;
		while(tmp2>0){
			if(last_digit == tmp2%10){
				count ++;
				num /= 10;
			}
			tmp2 /= 10;
		}
		num /= 10;
		printf("%d is repeated %d times in %d\n", last_digit, count, tmp1);
	}
	return 0;
}
