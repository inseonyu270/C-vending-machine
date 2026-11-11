#include <stdio.h>

int money = 0;
char product_name[10][20] = {
    {"갑자칩"},{"초코칩"},{"비스킷"},{"새우깡"},{"양파링"},{"초콜릿"},{"달고나"},{"뻥튀기"}, {"사탕"},{"젤리"}
};
int product_price[10] = {
    1700, 2500, 2000, 1600, 1700, 1200, 1000, 1500, 500, 1200
};
int product_stock[10] = {
    8, 6, 10, 14, 5, 11, 0, 2, 20, 15
};

int veding_menu();
int veding_input();
int veding_buy();

int main(){
    printf("---------------------------------------\n");
    printf("               과자 자판기              \n");
    printf("---------------------------------------\n");
    veding_menu();
    while(true){
        int num;
        printf("[!] 메뉴 선택 >>");
        scanf_s("%d", &num);
        if (num == 0) {
            printf("[!] 자판기를 종료합니다.");
            break;
        }
    }

    return 0;
}

int veding_menu(){
    printf("        [ 상품 목록 ]\n");
    for (int i = 0; i < 10; i++) {
        printf(" [%d] %-3s %4d원  재고 %2d개\n",i + 1, product_name[i], product_price[i], product_stock[i]);
    }
    printf("---------------------------------------\n");
    printf("[!] 현재 잔액 : %d원\n", money);
    printf("---------------------------------------\n");
    printf(" [ 메뉴 안내 ]\n");
    printf(" 1. 현금 투입\n");
    printf(" 2. 상품 구매하기\n");
    printf(" 3. 잔돈 반환하기\n");
    printf(" 4. 판매 매출 확인\n");
    printf(" 5. 판매 매출 초기화\n");
    printf(" 6. 자판기 다시 이용하기\n");
    printf(" 0. 프로그램 종료\n");
    printf("---------------------------------------\n");
}

