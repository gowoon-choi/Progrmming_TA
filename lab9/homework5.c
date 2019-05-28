#include <stdio.h>

void result(int num){
    if(num != 0){
        printf("%d",num%10);
        result(num/10);
    }
}

int main(){
    int num;
    printf("정수를 입력하시오 : ");
    scanf("%d",&num);
    result(num);
}