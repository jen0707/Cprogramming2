#include <stdio.h>

int main()
{
	int Ax1 = 50, Ay1 = 50, Ax2 = 100, Ay2 = 100;
	int Bx1, By1, Bx2, By2;
	for (int i = 0; i < 3; i++)
	{
		printf("�簢�� B�� �� �� �Է� :");
		scanf_s("%d %d %d %d", &Bx1, &By1, &Bx2, &By2);
		if (Ax1 <= Bx1 && Ax2 >= Bx2 &&
			Ay1 <= By1 && Ay2 >= By2)
			printf("A�� B�� �����ϴ� ���\n");
		else if (Ax1 >= Bx1 && Ax2 <= Bx2 &&
			Ay1 >= By1 && Ay2 <= By2)
			printf("B�� A�� �����ϴ� ���\n");
		else if (Ax2<Bx1 || Ax1>Bx2 || Ay2<By1 || Ay1 >By2)
			printf("A�� B�� ��ġ�� �ʴ� ���\n");
		else
			printf("A�� B�� �κ������� ��ġ�� ���\n");
	}
	return 0;
}