#include <stdio.h>
#include <string.h>

int main(){
    char line[10][100];
    char seps[] = " ,.!\t\n";
    char *token;
    int i,j;
    printf("문자열을 입력해주세요.\n");
    i=0;
    while(gets(line[i])) i++;
    j = i;
    for(i=0;i<j;i++){
        token = strtok(line[i],seps);
        while(token!=NULL){
            printf("단어 : %10s \t 길이 : %d\n",token,strlen(token));
            token = strtok(NULL,seps);
        }
    }
    return 0;
}
