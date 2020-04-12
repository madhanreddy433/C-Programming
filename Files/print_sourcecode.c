#include<stdio.h>
int main(){

    FILE *fp = fopen(__FILE__, "r");
    while(!feof(fp)){
        putc(fgetc(fp), stdout);
    }
    fclose(fp);
    return 0;
}