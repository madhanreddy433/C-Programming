#include <stdio.h>
#include <string.h>

int main(){
	char name[] = "madhan reddy", tmp;
	int i,n= strlen(name);
	
	for(i=0; i<n/2; i++){
		tmp = name[i];
		name[i] = name[n-1-i];
		name[n-1-i] = tmp;
	}
	
	printf("%s", name);
	return 0;
}
