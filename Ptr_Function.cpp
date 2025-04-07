#include <stdio.h>
void sub_1(int a[], int b[], int n);
void sub_2(int *a, int *b, int n);


int main()
{
	int a[5];
	int result[5];
	int array_1[5];
	int array_2[5];

	printf("정수 5개를 입력하시오. : ");
	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &a[i]);
	}

	sub_1(a, array_1, 5);
	sub_2(a, array_2, 5);

	for (int i = 0; i < 5; i++) {
		result[i] = array_1[i] + array_2[i];

		printf(" %d", result[i]);
	}

	return 0;
}

void sub_1(int a[], int b[], int n)
{
	for (int i = 0; i < n; i++) {
		b[i] = a[i];
	}
}

void sub_2(int *a, int *b, int n)
{
	for (int i = 0; i < n; i++) {
		*(b + i) = *(a + i);
	}
}