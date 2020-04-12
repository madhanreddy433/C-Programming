#include<stdio.h>
int main(){
	int a = 0, b = 1, i, limit, tmp;
	printf("enter the limit:");
	scanf("%d", &limit);
	printf("%d ", a);
	for(i=2;i<=limit;i++){
		printf("%d ", b);
		tmp = a;
		a = b;
		b = a+tmp;
	}
	return 0;
}
