#include <stdio.h>
int main(int argc, char const *argv[]){
    FILE *fptr_w, *fptr_r;
    fptr_r = fopen(argv[1], "r");
    if(fptr_r == NULL){
        printf("unable to open file!");
    }else{
        printf("file %s opened successfully!", argv[1]);
        fptr_w = fopen(argv[2], "w");
        while(fgetc(fptr_r) != EOF){
            printf("%c", fgetc(fptr_r));
            fputc(fgetc(fptr_r), fptr_w);
        }
        fclose(fptr_r);
        fclose(fptr_w);
    }
    return 0;
}