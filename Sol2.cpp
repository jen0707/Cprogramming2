#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char* p;
	int size = 10, index = 0;
	char c;

	p = (char*)malloc(size * sizeof(char));
	printf("입력할 문자열 : ");
	do {
		c = getchar();
		if (index >= (size - 1)) {
			size *= 2;
			p = (char*)realloc(p, sizeof(char) * size);
		}
		p[index++] = c;
	} while (c != '\n');

	p[index] = NULL;
	printf("입력된 문자열 = %s\n", p);
	return 0;
}