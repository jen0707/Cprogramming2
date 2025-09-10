#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    FILE* fp = NULL;
    int c;

    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("파일 열기 실패\n");
        return 1;
    }

    printf("문자 입력: \n");
    while ((c = getchar()) != EOF) {
        fputc(c, fp);
    }

    fclose(fp);
    printf("파일에 저장 완료\n");
    return 0;
}
