#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    gets(str);

    int index = 0;
    char *p = strchr(str,' ');
    if(p != NULL){
        printf("%c",str[index++]-32);
        for(int i =1;i<strlen(str);i++){
            if(str[index-1] == ' ') printf("%c",str[index++]-32);
            else printf("%c",str[index++]);
        }
    }
    else{
        for(int i=0;i<strlen(str);i++){
            if(str[i]>=65 && str[i]<=90 && i !=0){
                printf(" ");
            }
            printf("%c",str[i]);
        }
    }
}
