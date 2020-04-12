#include <stdio.h>

void delete_nth_elmnt(int *a, int size, int position);

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
	
	printf("enter the position of an element to delete:");
	scanf("%d", &position);
	
	printf("array after deleting an element:");
	delete_nth_elmnt(a, 6, position);
	
	return;
}

void delete_nth_elmnt(int *a, int size, int position){
	int i;
	
	if(position > size){
		printf("Deletion not possible\n");
	}else{
		for(i=position-1; i<size; i++){
			a[i] = a[i+1];
		}
	}
	for(i=0; i<size-1; i++){
		printf(" %d ", a[i]);
	}
	return;
}
