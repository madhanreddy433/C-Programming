#include <stdio.h>

int main(){
	int num1 = 1;
	float num2 = 2.1234567;
	
	printf("using %%d: %d end\n", num1);
	printf("using %%0d: %0d end\n", num1);
	printf("using %%1d: %1d end\n", num1);
	printf("using %%2d: %2d end\n", num1);
	printf("using %%4d: %4d end\n", num1);
	printf("using %%04d: %04d end\n", num1);
	printf("using %%-4d: %-4d end\n", num1);
	
	printf("using %%f: %f end\n", num2);
	printf("using %%.f: %.f end\n", num2);
	printf("using %%.2f: %.2f end\n", num2);	
	printf("using %%-4.2f: %-4.2f end\n", num2);
	printf("using %%-4.3f: %-4.3f end\n", num2);
	printf("using %%-4.4f: %-4.4f end\n", num2);
	
	return 0;
}
