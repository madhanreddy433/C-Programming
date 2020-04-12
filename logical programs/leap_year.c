/*
#include<stdio.h>

int main(){
	int year;
	printf("enter year to check:");
	scanf("%d", &year);
	if((year%4 ==0)&&(year%100 != 0) || (year%400 == 0)){
		printf("year %d is leap year!", year);
	}else{
		printf("year %d is not a leap year!", year);
	}
	return 0;
}
*/

#include<stdio.h>
int main(){
	int year;
	printf("enter year to check:");
	scanf("%d", &year);
	
	if(year%4 == 0){
		if(year%100 == 0){
			if(year%400 == 0){
				printf("year %d is leap year!");
			}else{
				printf("year %d is not a leap year!");
			}
		}else{
			printf("year %d is a leap year!");
		}
	}else{
		printf("year %d is not a leap year!");
	}
	return 0;
}
