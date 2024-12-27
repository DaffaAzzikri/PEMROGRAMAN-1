#include <stdio.h>

int main() {
    float nilai1, nilai2, hasil;
    
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &nilai1);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nilai2);
    
    hasil = nilai1 + nilai2;

    if ((int)nilai1 == nilai1) {
        printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    } else {
        printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", nilai1, nilai2, hasil);
    }
    
    return 0;
}