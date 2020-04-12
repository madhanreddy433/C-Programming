#include<stdio.h>
#include<string.h>

int main(){
    char str[20], copy[20], i;

    printf("enter string:");
    gets(str);

    for(i=0;i<strlen(str);i++){
        copy[i] = str[i];
    }
    printf("copy: %s", copy);
    return 0;
}