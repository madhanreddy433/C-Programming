#include <stdio.h>

int main(){
	int limit, i, j, flag, cur;
	printf("enter limit:");
	scanf("%d", &limit);
	
	for(i = 1;i<=limit;i++){
		cur = i;
		flag = 0;
		for(j=2;j<=cur/2;j++){
			if(cur%j == 0)
				flag++;
		}
		if(!flag){
			printf("%d ", i);	
		}
	}
	return 0;
}
