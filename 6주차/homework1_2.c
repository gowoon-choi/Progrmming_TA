#include <stdio.h>

int main(){
    int num;
    int result = 0;

    while(1){
        printf("숫자를 입력하세요 : ");
        scanf("%d", &num);
        if(num<0) break;
        result+=num;
    }

    printf("%d",result);
}