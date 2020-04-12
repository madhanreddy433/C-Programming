#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int i, words = 0;

    printf("enter the string:");
    gets(str);

    for(i=0; i<strlen(str); i++){
        if(str[i] == ' '){
            words ++;
        }
    }
    printf("no of words in %s are: %d", str, words);
    return 0;
}