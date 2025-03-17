#include <stdio.h>

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int a, b, c;
		scanf_s("%d %d %d", &a, &b, &c);
		if (a + b <= c || a + c <= b || b + c <= a)
			printf("삼각형이 될 수 없음.\n");
		else if (c * c == a * a + b * b || a * a == b * b + c * c || b * b == a * a + c * c)
			printf("직각삼각형\n");
		else if (a == b == c)
			printf("정삼각형\n");
		else if (a == b || b == c || c == a)
			printf("이등변삼각형\n");
		else
			printf("일반삼각형\n");
	}
	return 0;
}