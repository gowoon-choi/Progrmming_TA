#include <stdio.h>

void add(int a[], int size){
    for(int i=0;i<size;i++) a[i]++;
    for(int i=0;i<size;i++) printf("%d ",a[i]);
}

int add2(int a){
    a++;
    printf("%d\n",a);
    return a;
}

int main(){
    int a[10];
    for(int i=0;i<10;i++) a[i] = i;
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
    add(a,10);
    printf("\n");
    for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");

    int b=10;
    printf("%d\n",b);
    int c = add2(b);
    printf("%d\n",b);
    printf("%d\n",c);

    return 0;
}