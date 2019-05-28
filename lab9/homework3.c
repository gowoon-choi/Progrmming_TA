#include <stdio.h>

int fib(int num){
    if(num ==0 || num == 1) return 1;
    else{
        return fib(num-2) + fib(num-1);
    }
}

int main() {
    int size;
    printf("몇 개 항을 출력할 지 입력하세요 : ");
    scanf("%d",&size);

    for(int i=0;i<size;i++) printf("%d ",fib(i));

    return 0;
}