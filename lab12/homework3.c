#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    gets(str);

    char *p = strchr(str,' ');
    if(p != NULL){
        for(int i=0;i<strlen(str);i++){
            if(str[i]==' ') continue;
            else printf("%c",str[i]);
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
