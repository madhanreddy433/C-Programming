#include <stdio.h>
int main(){
    FILE *fptr = fopen("text.txt", "r")
    if(fptr == NULL){
        printf("unable to open the file!");
    }else{
        printf("file opened successfully!");
        while(!feof(fptr)){
            printf("%c", fgetc(fptr));
        }
    }
    return 0;
}
