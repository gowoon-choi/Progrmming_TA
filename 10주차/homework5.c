#include <stdio.h>

#define SIZE 5

int main(){
    int a[SIZE],b[SIZE];
    printf("배열1의 원소를 5개 입력하세요 : ");
    for(int i=0;i<SIZE;i++) scanf("%d",&a[i]);
    printf("배열2의 원소를 5개 입력하세요 : ");
    for(int i=0;i<SIZE;i++) scanf("%d",&b[i]);

    printf("교집합 : ");
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            if(a[i] == b[j]) printf("%d ",a[i]);
        }
    }
}
