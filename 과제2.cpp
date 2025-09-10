#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    char name[30];
    int price;
    int stock;
} Product;

typedef struct {
    int index;
    int quantity;
} Order;

int main(void) {
    Product products[MAX];
    Order orders[MAX];
    int product_count, menu, i, choice, quantity;
    int order_count, total, received, change;

    printf("슈퍼에서 취급하는 상품의 개수를 입력하시오.>>> ");
    scanf("%d", &product_count);

    for (i = 0; i < product_count; i++) {
        printf("%d번째 상품의 이름, 가격, 재고량을 입력하시오.>>> ", i + 1);
        scanf("%s %d %d", products[i].name, &products[i].price, &products[i].stock);
    }

    while (1) {
        printf("\n1) 판매\t2) 구매\t3) 조회\t4) 종료\n>>> ");
        scanf("%d", &menu);

        if (menu == 1) { // 판매
            order_count = 0;
            while (1) {
                // 상품 목록 출력
                for (i = 0; i < product_count; i++)
                    printf("%d) %s    ", i + 1, products[i].name);
                printf("%d) 계산\n>>> ", product_count + 1);

                scanf("%d", &choice);
                if (choice == product_count + 1)
                    break;
                if (choice < 1 || choice > product_count) continue;

                if (products[choice - 1].stock < 1) {
                    printf("재고가 부족합니다.\n");
                    continue;
                }

                // 이미 주문한 상품인지 확인
                int found = 0;
                for (i = 0; i < order_count; i++) {
                    if (orders[i].index == choice - 1) {
                        orders[i].quantity += 1;
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    orders[order_count].index = choice - 1;
                    orders[order_count].quantity = 1;
                    order_count++;
                }

                products[choice - 1].stock -= 1;
            }

            // 계산 및 영수증 출력
            total = 0;
            for (i = 0; i < order_count; i++) {
                int idx = orders[i].index;
                total += products[idx].price * orders[i].quantity;
            }

            printf("판매 가격 총액 :%d\n", total);
            printf("받은 금액을 입력하시오.>>> ");
            scanf("%d", &received);
            change = received - total;

            printf("\n     ###   영수증    ### \n");
            printf(" ========================== \n");
            for (i = 0; i < order_count; i++) {
                int idx = orders[i].index;
                printf("  %s\t%d x %d\t= %d\n", products[idx].name, products[idx].price,
                    orders[i].quantity, products[idx].price * orders[i].quantity);
            }
            printf(" ========================== \n");
            printf("   총액\t\t\t%d\n", total);
            printf("   받은금액\t\t%d\n", received);
            printf(" ========================== \n");
            printf("   거스름돈\t\t%d\n", change);
        }

        else if (menu == 2) { // 구매
            while (1) {
                printf("1) ");
                for (i = 0; i < product_count; i++)
                    printf("%d) %s    ", product_count+1, products[i].name);
                printf("%d) 구매 종료\n>>> ", product_count + 1);

                scanf("%d", &choice);
                if (choice == product_count + 1)
                    break;
                if (choice < 1 || choice > product_count) continue;

                printf("구매 수량을 입력하시오.>>> ");
                scanf("%d", &quantity);
                products[choice - 1].stock += quantity;
                printf(" ## %s의 재고량이 %d으로 증가 함.\n", products[choice - 1].name, products[choice - 1].stock);
            }
        }

        else if (menu == 3) { // 조회
            printf("###   상품명      재고량   ###\n");
            printf("===============================\n");
            for (i = 0; i < product_count; i++)
                printf("  %s\t\t%d\n", products[i].name, products[i].stock);
            printf("===============================\n");
        }

        else if (menu == 4) { // 종료
            break;
        }

        else {
            printf("잘못된 입력입니다.\n");
        }
    }
}