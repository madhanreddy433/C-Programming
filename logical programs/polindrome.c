/* check whether the given number is polindrome or not */

#include <stdio.h>

int main(){
	int n, rev = 0, tmp;
	printf("enter a number:");
	scanf("%d", &n);
	tmp = n;
	while(n>0){
		rev = rev*10 + n%10;
		n /= 10;
	}
	if(rev == tmp){
		printf("given number %d is polindrome\n", tmp);
	}else{
		printf("given number %d is not a polindrome\n", tmp);
	}
	return 0;
}

