#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matriks_a[n][n], matriks_b[n][n], hasil[n][n];

    printf("Matriks A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriks_a[i][j]);
        }
    }

    printf("Matriks B\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriks_b[i][j]);
        }
    }

   printf("Matriks %dX%d \n", n, n); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < n; k++) {
                hasil[i][j] += matriks_a[i][k] * matriks_b[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}