#include <stdio.h>

int count = 0;

void print(){
    count ++;
    printf("Hello World\n%d\n",count);
}

int main(){
    int n;
    printf("반복 횟수를 입력하세요 : ");
    scanf("%d", &n);

    for(int i=0;i<n;i++) print();

    return 0;
}