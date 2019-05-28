#include <stdio.h>

int main(){
    int num;
    int flag = 0;
    printf("숫자를 하나 입력하세요 : ");
    scanf("%d",&num);

    for(int i=2;i<=num;i++){
        flag = 0;
        for(int j=2;j<i;j++){
            if(i%j == 0) flag = 1;
        }
        if(flag == 0) printf("%d ",i);
    }
}