#include <stdio.h>
int num = 0;
void check(void);
int main()
{
    int num = 1;
    {
        int num = 2;
        printf("%d\n", num);
    }
    check();
    printf("%d\n", num);
}
void check(void) {
    printf("%d\n", num);
}
