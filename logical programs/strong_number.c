
#include <stdio.h>

int main(){
	int num, i,rem, fact, tmp, sum = 0;
	
	printf("enter a number:");
	scanf("%d", &num);
	
	tmp = num;
	while(num>0){
		rem = num%10;
		fact = 1;
		for(i=1;i<=rem;i++){
			fact *= i;
		}
		sum += fact;
		num /= 10;
	}
	printf("sum = %d\n", sum);
	if(tmp == sum){
		printf("entered number %d is a strong number!", tmp);
	}else{
		printf("entered number %d is not a strong number!", tmp);
	}
	return 0;
}


