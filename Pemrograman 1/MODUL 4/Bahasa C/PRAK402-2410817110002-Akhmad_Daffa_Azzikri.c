#include <stdio.h>

int main() {
    int limit;
    printf("");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = (limit % 2 == 0 ? limit : limit - 1); i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
