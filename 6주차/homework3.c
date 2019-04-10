#include <stdio.h>

int main(){
    int num;
    printf("돌의 개수를 입력하세요 : ");
    scanf("%d",&num);

    int flag = 0;
    int a;
    do{
        if(flag == 0) {
            printf("A : ");
        }
        if(flag == 1){
            printf("B : ");
        }
        scanf("%d", &a);
        num-=a;
        flag = !flag;
    }while(num>0);

    if(flag == 1) printf("A의 승리입니다. ");
    else if(flag == 0) printf("B의 승리입니다. ");
}