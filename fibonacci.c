#include <stdio.h>

int main(){
	int a = 0, b = 1, i;
	printf("%d\t", a);
	printf("%d\t", b);
	
	for(i=2;i<=20;i++)
	{
		int c = a+b;
		printf("%d\t", c);
		a = b;
		b = c;
	}
		
	return 0;
}
