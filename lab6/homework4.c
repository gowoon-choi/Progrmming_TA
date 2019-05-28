#include <stdio.h>

int main(){
    int a,b;
    int gcd;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d",&a,&b);

    for(int i=1; i<=a;i++){
        if(a%i == 0 && b%i == 0) gcd = i;
    }
    printf("두 수의 최대공약수는 %d입니다.\n",gcd);
    if(gcd == 1) printf("두 수는 서로소입니다.");
}