#include <stdio.h>

int main()
{
	int Ax1 = 50, Ay1 = 50, Ax2 = 100, Ay2 = 100;
	int Bx1, By1, Bx2, By2;
	for (int i = 0; i < 3; i++)
	{
		printf("사각형 B의 두 점 입력 :");
		scanf_s("%d %d %d %d", &Bx1, &By1, &Bx2, &By2);
		if (Ax1 <= Bx1 && Ax2 >= Bx2 &&
			Ay1 <= By1 && Ay2 >= By2)
			printf("A가 B를 포함하는 경우\n");
		else if (Ax1 >= Bx1 && Ax2 <= Bx2 &&
			Ay1 >= By1 && Ay2 <= By2)
			printf("B가 A를 포함하는 경우\n");
		else if (Ax2<Bx1 || Ax1>Bx2 || Ay2<By1 || Ay1 >By2)
			printf("A와 B가 겹치지 않는 경우\n");
		else
			printf("A와 B가 부분적으로 겹치는 경우\n");
	}
	return 0;
}