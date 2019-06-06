#include <stdio.h>
#include <string.h>
struct price
{
    int large;
    int regular;
};
struct menu
{
    char *name; //메뉴이름
    double kcal; //칼로리
    struct price size; //사이즈에 따른 금액
};
typedef struct menu menu;

void print_menu(menu cafe) {
    for (int i = 0; i < 5; i++) {
        printf("%16s  ", cafe[i].name);
    }
}

int main() {
    menu *cafe;
    menu coffee[5] = {
            {"에스프레소", 25.3, 3800,4300},
            {"아메리카노", 20.1, 4300,4800},
            {"카푸치노", 124.9, 4500,5000},
            {"바닐라 라떼", 201.5, 4600,5100},
            {"카라멜 마키아토", 300.0, 4800,5300}
    };
    cafe = &coffee;

    printf("***************CAFFE on the PLAN***************\n");
    printf("         menu        kcal     large   regular\n");
    printf("-----------------------------------------------\n");
    print_menu(coffee);
    printf("-----------------------------------------------\n");
}