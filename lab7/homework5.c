#include <stdio.h>
#include <math.h>

int myPow(double a, double b){
    int result = 1;
    for(int i=0;i<b;i++) result*=a;
    return result;
}

int main(){
    int a, b;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d",&a,&b);

    printf("사용자 정의 함수 : %d\n", myPow(a,b));
    //방법1
    printf("math.h 내장 함수 : %d\n", (int)pow(a,b));
    //방법2
    printf("math.h 내장 함수 : %.0f", pow(a,b));

    return 0;
}