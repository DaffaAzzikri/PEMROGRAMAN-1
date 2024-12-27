#include <stdio.h>
#include <math.h>

int main(){
    int alas = 5;
    int tinggi = 12;
    int sisi_A = 12, sisi_C = 5;
    double B = (sisi_A*sisi_A) + (sisi_C*sisi_C);
    double sisi_B = sqrt(B);


    printf("Diketahui :\nAlas = %d cm \nTinggi = %d cm\n\n", alas, tinggi);
    printf("Jawab :\nSisi A = %d cm\nSisi B = %.0f cm\nSisi C = %d cm\n", sisi_A, sisi_B, sisi_C);
    printf("Keliling = %.0f cm\n", sisi_A + sisi_B + sisi_C);
    printf("Luas = %.0f cm", 1/2 * alas * tinggi);
    return 0;
}