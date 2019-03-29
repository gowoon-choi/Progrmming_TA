#include <stdio.h>

int main(){
    int x, y;
    printf("2개의 정수 입력(10진수) : ");
    scanf("%d%d",&x,&y);
    printf("******8진수 출력******\n");
    printf("%d+%d = %o\n",x,y,x+y);
    printf("%d-%d = %o\n",x,y,x-y);
    printf("%d*%d = %o\n",x,y,x*y);
    printf("%d/%d = %o\n",x,y,x/y);

    printf("******16진수 출력******\n");
    printf("%d+%d = %x\n",x,y,x+y);
    printf("%d-%d = %x\n",x,y,x-y);
    printf("%d*%d = %x\n",x,y,x*y);
    printf("%d/%d = %x\n",x,y,x/y);
}