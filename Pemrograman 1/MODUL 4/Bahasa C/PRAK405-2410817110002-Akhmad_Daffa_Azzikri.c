#include <stdio.h>

int main() {
    int n, k, sum = 0;

    printf("");
    scanf("%d", &n);
    printf("");
    scanf("%d", &k);

    for (int i = 1; i <= n; i++) {
        int sum2 = 0;
        for (int j = 1; j <= i; j++) {
            sum2 += j * k;
            printf("(%d * %d) ", j, k);
            if (j < i) printf("+ ");
        }
        printf("= %d\n", sum2);
        sum += sum2;
    }
    printf("%d\n", sum);

    return 0;
}
