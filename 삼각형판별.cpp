#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int a, b, c;
		scanf_s("%d %d %d", &a, &b, &c);
		if (a + b <= c || a + c <= b || b + c <= a)
			printf("�ﰢ���� �� �� ����.\n");
		else if (c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c)
			printf("�����ﰢ��\n");
		else if (a == b == c)
			printf("���ﰢ��\n");
		else if (a == b || b == c || c == a)
			printf("�̵�ﰢ��\n");
		else
			printf("�Ϲݻﰢ��\n");
	}
	return 0;
}