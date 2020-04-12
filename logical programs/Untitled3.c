/**
 * C program to print all Strong Numbers between 1 to n
 */

#include <stdio.h>

int main()
{
    int i, tmp, num, lastDigit, limit;
    long long fact, sum;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &limit);

    printf("All Strong numbers between 1 to %d are:\n", limit);
    
    /* Iterate from 1 to end */
    for(num=1; num<=limit; num++)
    {
        /* Number to check for strong number */
        tmp = num;

        sum = 0;

        /* Find the sum of factorial of digits */ 
        while(num > 0)
        {
            fact = 1ll;
            lastDigit = num % 10;

            /* Find factorial of last digit of current num. */
            for( i=1; i<=lastDigit; i++)
            {
                fact = fact * i;
            }

            sum += fact; 

            num /= 10;
        }
        
        /* Print 'i' if it is strong number */  
        if(sum == tmp)
        {
            printf("%d, ", tmp);
        }
    }

    return 0;
}
