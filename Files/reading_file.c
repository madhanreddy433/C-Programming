#include<stdio.h>
int main(){

    char file_name[20];
    char *fn = file_name;
    printf("enter file name to read:");
    gets(fn);

    FILE *fptr = fopen(fn, "r");
    //fseek(fptr,0,SEEK_SET);
    while(!feof(fptr)){
        //printf("%c", fgetc(fptr));
        putc(fgetc(fptr), stdout);
    }
    fclose(fptr);
}