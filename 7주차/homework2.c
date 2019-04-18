#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int isRight(int a, int b, int result){
    if(a*b == result) return 1;
    else return 0;
}

int main() {
    int a, b, result, flag = 0;
    srand((unsigned)time(NULL));
    while(1){
        a = rand()%9 + 1;
        b = rand()%9 + 1;

        printf("%d * %d 는? ",a,b);
        scanf("%d",&result);
        if(!isRight(a,b,result)){
            flag++;
            if(flag == 1) printf("삼오십오 오삼십오 지화자 좋다~\n");
            if(flag == 2){
                printf("탈락하였습니다ㅠㅠ");
                break;
            }
        }
    }
    return 0;
}