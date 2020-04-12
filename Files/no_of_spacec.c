#include <stdio.h>
int main(){
    int space = 0, tab = 0, new_line = 0;
    FILE *fptr = fopen("text.txt", "r");
    if(fptr == NULL){
        printf("unable to open the file!\n");
    }else{
        printf("file opened successfully!\n");
        while(!feof(fptr)){
            printf("%c", fgetc(fptr));
            switch (fgetc(fptr))
            {
            case ' ':
                space++;
            case '\t':
                tab++;
            case '\n':
                new_line++;
            }
        }
        fclose(fptr);
        printf("\n");
        printf("spaces: %d\ttabs: %d\tnew_lines: %d\n", space,tab,new_line);
    }
    return 0;
}