#include <stdio.h>
#include <string.h>

int main(){
    char txt[100];
    int i;
    printf("enter text to write to file:");
    gets(txt);
    FILE *fptr = fopen("demo.txt", "w");
    if(fptr != NULL){
        printf("file opened successfully!");
        for(i=0;i<strlen(txt);i++){
            fputc(txt[i], fptr);
        }
    }else{
        printf("unable to open a file!");
    }
    return 0;
}