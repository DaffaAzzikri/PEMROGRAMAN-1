#include <stdio.h>

int main() {
    int baris, kolom;
    scanf("%d %d", &baris, &kolom);
    int matrix[baris][kolom];
    int isi[baris * kolom];

    for (int i = 0; i < baris * kolom; i++) {
        scanf("%d", &isi[i]);
    }

    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            matrix[i][j] = isi[i * kolom + j];
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}