#include <stdio.h>
#include <stdlib.h>

#define SIZE 11

int main()
{
    int freq[SIZE] = { 0 };
    int n, i;
    int dice_1, dice_2, sum;

    printf("�ֻ����� �� �� �����ðڽ��ϱ�?");
    scanf_s("%d", &n);

    for (i = 0; i < n; i++) {
        dice_1 = rand() % 6 + 1;
        dice_2 = rand() % 6 + 1;
        sum = dice_1 + dice_2;
        ++freq[sum - 2];
    }

    for (i = 0; i < SIZE; i++) {
        printf("���� %d�� ��� : %d ��\n", i + 2, freq[i]);
    }

    return 0;
}
