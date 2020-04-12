/* sum of digits of a given number */

#include <stdio.h>

int main(){
	int n, sum = 0, tmp;
	printf("enter a number:");
	scanf("%d", &n);
	tmp = n;
	while(n>0){
		sum = sum + n%10;
		n /= 10;
	}
	printf("sum of digits of a given number %d is %d", tmp, sum);
	return 0;
}
