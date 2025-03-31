#include <stdio.h>

int factorial(int n);
int combination(int n, int r);
int get_integer();

int main()
{
	int n, r;
	n = get_integer();
	r = get_integer();

	printf("C(%d, %d) = %d\n", n, r, combination(n, r));
	return 0;
}

int factorial(int n)
{
	int i, result = 1;

	for (i = 1; i <= n; i++)
		result = result * i;
	return result;
}

int combination(int n, int r)
{
	return (factorial(n) / (factorial(r) * factorial(n - r)));
}

int get_integer()
{
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	return n;
}