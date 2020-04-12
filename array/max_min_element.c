#include <stdio.h>

int max_element(int *a, int size);
int max_element(int *a, int size);

int main(){
	
	int a[6],i, position;
	for(i=0; i<6; i++){
		printf("enter %dth element:", i);
		scanf("%d", &a[i]);
	}
	printf("\nentred array is:");
	for(i=0;i<6;i++){
		printf(" %d ",a[i]);
	}
	printf("\n");
	
	printf("max element: %d", max_element(a, 6));
	printf("min element: %d", min_element(a, 6));
	
	return;
}

int max_element(int *a, int size){
	int max = a[0], i, tmp;
	for(i=0; i<size; i++){
		if(max < a[i]){
			tmp = max;
			max = a[i];
			a[i] = tmp;
		}
	}
	return max;
}

int min_element(int *a, int size){
	int min = a[0], i, tmp;
	for(i=0; i<size; i++){
		if(min > a[i]){
			tmp = min;
			min = a[i];
			a[i] = tmp;
		}
	}
	return min;	
}
