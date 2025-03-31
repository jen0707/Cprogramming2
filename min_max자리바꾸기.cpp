#include <stdio.h>
#define SIZE 5

void print_array(int a[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}

int main()
{
	int list[SIZE];
	printf("���� 5���� �Է��Ͻÿ�. : ");
	scanf_s("%d %d %d %d %d", &list[0], &list[1], &list[2], &list[3], &list[4]);
	printf("�Է� ���� �迭: ");
	print_array(list, SIZE);

	
	int i, temp, min = 0, max = 0;
	for (i = 0; i < SIZE; i++) {
		if (list[i] < list[min])
			min = i;
		if (list[i] > list[max])
			max = i;
	}

	temp = list[min];
	list[min] = list[max];
	list[max] = temp;

	printf("���� ���� �迭 :");
	print_array(list, SIZE);
	printf("\n");
	return 0;
}