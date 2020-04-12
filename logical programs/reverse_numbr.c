/* printng the reverse of a given number */

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
	
	printf("reverse of a given number %d is %d\n", tmp, rev);
	return 0;
}
