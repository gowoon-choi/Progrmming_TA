#include <stdio.h>

void print(){
    static int count = 0;
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