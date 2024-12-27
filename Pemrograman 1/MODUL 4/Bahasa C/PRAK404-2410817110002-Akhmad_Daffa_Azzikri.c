#include <stdio.h>

int main() {
    int choice;
    float a, b;

    printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
    printf("Masukkan Pilihan : ");
    scanf("%d", &choice);

    while (choice != 5) {
        if (choice >= 1 && choice <= 4) {
            printf("Masukkan nilai pertama: ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua: ");
            scanf("%f", &b);
        }

        switch (choice) {
            case 1:
                printf("Hasil Penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
                break;
            case 2:
                printf("Hasil Pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
                break;
            case 3:
                printf("Hasil Perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Hasil Pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
                else
                    printf("Error! Pembagian dengan nol tidak diperbolehkan.\n");
                break;
            default:
                printf("Input anda salah, silahkan coba lagi\n");
                break;
        }

        printf("\nPilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);
    }

    printf("Terimakasih, telah menggunakan kalkulator Akhmad Daffa Azzikri\n");
    return 0;
}
