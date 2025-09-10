#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5
struct product {
	int number;
	char name[20];
	double price;
};

int main(void)
{
	struct product list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("번호를 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("가격을 입력하시오(실수): ");
		scanf("%lf", &list[i].price);
	}

	for (i = 0; i < SIZE; i++)
		printf("번호: %d, 이름: %s,  가격: %f\n", list[i].number, list[i].name, list[i].price);
	return 0;

}