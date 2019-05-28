#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    gets(str);

    int index = 0;
    printf("%c",str[index++]-32);
    for(int i =1;i<strlen(str);i++){
        if(str[index-1] == ' ') printf("%c",str[index++]-32);
        else printf("%c",str[index++]);
    }

    return 0;
}
