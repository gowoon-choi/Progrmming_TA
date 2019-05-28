#include <stdio.h>
#include <string.h>

int check(char s[], char a[], char ch){
    int i;
    for(i=0;s[i]!=NULL;i++){
        if(s[i] == ch) a[i] = ch;
    }
    if(strcmp(s,a) == 0) return 1;
    else return 0;
}

int main(){
    char solution[100];
    char answer[100];
    char ch;
    int i;
    printf("문제의 정답을 입력하세요 : ");
    gets(solution);
    for(i=0;i<100;i++){
        answer[i] = solution[i];
        if(solution[i] > 'a' && solution[i] < 'z') answer[i] = '_';
    }

    while (1){
        printf("\n문자열을 입력하시오 : %s \n",answer);
        printf("글자를 추측하시오 : ");
        ch = getchar();
        if(check(solution,answer,ch) == 1){
            printf("정답입니다 !\n");
            break;
        }
        rewind(stdin);
    }
    return 0;
}