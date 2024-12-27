#include <stdio.h>

int main() {
    int a, b;

    printf("");
    scanf("%d %d", &a, &b);

    if (a < b) {
        for (int i = a, j = b; i <= b && j >= a; i++, j--) {
            if (i == b && j == a) {
                printf("%d %d", i, j);
            } else {
                printf("%d %d - ", i, j);
            }
        }
    } else {
        for (int i = a, j = b; j <= a && i >= b; i--, j++) {
            if (i == b && j == a) {
                printf("%d %d", i, j);
            } else {
                printf("%d %d - ", i, j);
            }
        }
    }

    printf("\n");
    return 0;
}
