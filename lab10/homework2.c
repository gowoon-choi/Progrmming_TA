#include <stdio.h>

int isSame(int a[], int b[],int size){
    int flag = 1;
    for(int i=0;i<size;i++){
        if(a[i]!=b[i]) flag = 0;
    }
    return flag;
}

int main(){
    int a[5];
    int b[5];

    printf("배열 1의 원소를 5개 입력하세요 : ");
    for(int i=0;i<5;i++) scanf("%d",&a[i]);
    printf("배열 2의 원소를 5개 입력하세요 : ");
    for(int i=0;i<5;i++) scanf("%d",&b[i]);

    if(isSame(a,b,5)) printf("같은 배열입니다. ");
    else printf("다른 배열입니다. ");

    return 0;
}