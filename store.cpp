#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	char name[20];
	int price;
	int stock;
}Product;

Product products[10];

int sell()
{
	printf("1) 콜라  2) 우유  3) 맥주  4) 라면  5) 과자  6) 계산\n");
	


}

int main()
{	
	int n;
	printf("슈퍼에서 취급하는 상품의 개수를 입력하시오.>>> ");
	scanf("%d", n);
	if (int k = 0; k == n; k++)
		printf("%d번째 상품의 이름, 가격, 재고량을 입력하시오.>>>", k);


}