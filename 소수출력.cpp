#include <stdio.h>

int main() {
    int n;
    printf("양의 정수 n : ");
    scanf_s("%d", &n);

    for (int i = 2; i <= n; i++) {
        int p = 1;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                p = 0;
                break;
            }
        }

        if (p == 1) {
            printf("%d ", i);
        }
    }
    return 0;
}