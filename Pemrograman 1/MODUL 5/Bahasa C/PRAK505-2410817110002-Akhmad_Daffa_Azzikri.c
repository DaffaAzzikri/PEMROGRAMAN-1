#include <stdio.h>

void Biodata(int tahunLahir, char nama [], char asal[]) {
    int tahun_sekarang = 2020;
    printf("Perkenalkan Nama Saya : %s\n", nama);
    printf("Umur Saya : %d\n", tahun_sekarang - tahunLahir);
    printf("Saya Adalah Angkatan : %d \n", tahun_sekarang);
    printf("Asal Saya dari : %s\n", asal);
}

int main() {
    int tahunLahir;
    char nama[20], asal[20];
    scanf("%d", &tahunLahir);
    scanf(" %[^\n]%*c", nama);
    scanf(" %[^\n]%*c", asal);
    Biodata(tahunLahir, nama, asal);
    return 0;
}
