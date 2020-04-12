#include <stdio.h>

void print_fibonacci(int num){
	static int n1=0, n2=1, n3;
	if(num>0){
		n3 = n1+n2;
		printf("%d\t", n3);
		n1 = n2;
		n2 = n3;
		print_fibonacci(num-1);
	}  
}

int main(){
	int num;
	printf("enter a number:");
	scanf("%d", &num);
	
	printf("%d\t%d\t", 0, 1);
	print_fibonacci(num-2);
	
	return 0;
}

/*
#include<stdio.h>

int f(int);

int main()
{
  int n, i = 0, c;

  scanf("%d", &n);

  printf("Fibonacci series terms are:\n");

  for (c = 1; c <= n; c++)
  {
    printf("%d\n", f(i));
    i++;
  }

  return 0;
}

int f(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (f(n-1) + f(n-2));
}
*/
