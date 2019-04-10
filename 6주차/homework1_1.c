#include <stdio.h>

int main() {
    int num;
    int result = 0;
    printf("시작 숫자를 입력하세요 : ");
    scanf("%d",&num);


    for(int i=num; result <= 30; i++){
        if(i%2 == 0) continue;
        result += i;
    }

    printf("%d",result);
    return 0;
}