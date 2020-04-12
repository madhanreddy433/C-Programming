/* reversing a number using recursive function */

#include <stdio.h>

int reverse_num(int num);

int main(){
	int num;
	printf("enter a num:");
	scanf("%d", &num);
	
	
	printf("reverse of a given num is: %d\n", reverse_num(num));
	return 0;
}

int reverse_num(int num){
	static int rev_num = 0;		//must be static or global
	
	if(num){
		rev_num = rev_num*10 + num%10;
		reverse_num(num/10);
	}else{
		return rev_num;
	}
}
