#include <stdio.h>

void ascending(int *a, int size);
void descending(int *a, int size);

int main(){
	
	int a[6],i;
	for(i=0; i<6; i++){
		printf("enter %dth element:", i);
		scanf("%d", &a[i]);
	}
	printf("\nentred array is:");
	for(i=0;i<6;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
	
	printf("ascending order of an array:");
	ascending(a, 6);
	
	printf("descending order of an array:");
	descending(a, 6);
	return;
}

void ascending(int *a, int size){
	int tmp, i,j;
	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			if(a[i] > a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(i=0; i<size; i++){
		printf(" %d ", a[i]);
	}
	return;
}

void descending(int *a, int size){
	int tmp, i, j;
	
	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			if(a[i] < a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	for(i=0; i<size; i++){
		printf(" %d ", a[i]);
	}
	return;
}
