#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int count = 0,i;
    printf("enter a string:");
    gets(str);

    for(i=0;i<strlen(str);i++){
        switch (str[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            count ++;
        }
    }
    printf("no of vowels are: %d", count);
    return 0;
}