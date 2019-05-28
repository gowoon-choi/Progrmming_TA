#include <stdio.h>

double add(double a, double b){ return a+b; }
double sub(double a, double b){ return a-b; }
double mul(double a, double b){ return a*b; }
double div(double a, double b){ return a/b; }

int main(){
    double a,b;
    char op;

    while(1){
        printf("\n연산할 두 수를 입력하세요 : ");
        scanf("%lf %lf",&a,&b);
        while(1)
        {
            printf("\n어떤 연산을 수행할 지 선택하세요.\n1. 덧셈(+)  2. 뺄셈(-)  3. 곱셈(*)  4. 나눗셈(/) : ");
            scanf(" %c",&op);

            if(op=='+' || op=='-' || op=='*' || op=='/') break;
            else printf("잘못된 입력입니다.\n");
        }
        printf("\n답은 ");
        switch(op){
            case '+':
                printf("%lf",add(a,b));
                break;
            case '-':
                printf("%lf",sub(a,b));
                break;
            case '*':
                printf("%lf",mul(a,b));
                break;
            case '/':
                printf("%lf",div(a,b));
                break;
        }

        printf("입니다. \n\n종료하시겠습니까( y / n ) ? ");
        scanf(" %c",&op);
        if(op == 'y') break;
    }
    return 0;
}