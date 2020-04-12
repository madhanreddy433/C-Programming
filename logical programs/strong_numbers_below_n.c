#include <stdio.h>

int main(){
	int num, i,rem, tmp, limit;
	long long int sum, fact;
	
	printf("enter a number:");
	scanf("%d", &limit);
	for(num=1; num<=limit;num++){
		tmp = num;
		sum = 0;
		while(tmp>0){
			rem = tmp%10;
			fact = 1ll;
			for(i=1;i<=rem;i++){
				fact *= i;
			}
			sum += fact;
			tmp /= 10;
		}
		if(num == sum){
			printf("%d ", num);
		}	

	}
	return 0;
}






/*
#include <stdio.h>

int strong_num(int );
int main(){
	int limit, i;
	printf("enter limit:");
	scanf("%d", &limit);
	for(i=1;i<=limit;i++){
		if(strong_num(i))
			printf("%d ", i);
	}
	return 0;
}

int strong_num(int num){
	int i,rem, fact, tmp, sum = 0;
	
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
	if(tmp == sum)
		return tmp;
	else
		return 0;
}

*/








/*
/**
 * C program to print all Strong Numbers between 1 to n
 */

/*
#include <stdio.h>
int main()
{
   	int i, j, cur, lastDigit, end;
   	long long fact, sum;

   	printf("Enter upper limit: ");
   	scanf("%d", &end);
   	printf("All Strong numbers between 1 to %d are:\n", end);
    
   	for(i=1; i<=end; i++)
   	{
       	cur = i;

       	sum = 0;

       	while(cur > 0)
       	{
           	fact = 1ll;
           	lastDigit = cur % 10;

           	for( j=1; j<=lastDigit; j++)
           	{
               	fact = fact * j;
           	}

           	sum += fact; 

           	cur /= 10;
       	}
       
       	if(sum == i)
       	{
           	printf("%d, ", i);
       	}
   	}

   	return 0;
}
	
*/
