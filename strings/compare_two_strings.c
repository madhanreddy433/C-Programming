#include <stdio.h>
#include <string.h>

int main(){
    char str1[20], str2[20], count = 0, i;
    printf("enter string1:");
    gets(str1);
    printf("enter string2:");
    gets(str2);

    if(strlen(str1) == strlen(str2)){
        for(i=0;i<strlen(str1);i++){
            if(toupper(str1[i]) != toupper(str2[i])){
                count ++;
            }
        }
        if(count>0){
            printf("%s and %s are not same", str1, str2);
        }else{
            printf("%s and %s are same", str1, str2);
        }
    }else{
        printf("%s and %s not are same", str1, str2);
    }

    return 0;
}