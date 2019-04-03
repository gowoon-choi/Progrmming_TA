#include <stdio.h>

int main(){
    int num1,num2,num3;
    int divisor;
    int count = 0;
    printf("세 수를 입력하시오 : ");
    scanf("%d %d %d", &num1,&num2,&num3);
    printf("위의 세 수보다 작거나 같은 수를 하나 입력하시오 : ");
    scanf("%d",&divisor);

    printf("%d를 약수로 가지는 수는 ",divisor);
    if(num1 % divisor == 0){
        printf("%d ",num1);
        count++;
    }
    if(num2 % divisor == 0){
        printf("%d ",num2);
        count++;
    }
    if(num3 % divisor == 0){
        printf("%d ",num3);
        count++;
    }
    if(count == 0) printf("없습니다. ");
    else printf("총 %d개 입니다.",count);

    return 0;
}