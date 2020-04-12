#include <stdio.h>

int main(){
	int a[] = {1,3,2,4,5};
	int i, largest, sec_largest;;
	largest = a[0];
	sec_largest = a[1];
	
	for (i=0;i<sizeof(a);i++){
		if(a[i]>largest){
			sec_largest = largest;
			largest = a[i];
		}else if(a[i]>sec_largest && a[i] != largest){
			sec_largest = a[i];			
		}
	}
	printf("largest: %d\tsec_largest: %d\n", largest, sec_largest);
	return 0;
}
