#include <stdio.h>
#include <math.h>

int main() {
    float a, b, alas, tinggi, keliling, luas;
    
    printf("");
    scanf("%f", &a);
    printf("");
    scanf("%f", &b);
    
    alas = sqrt(b * b - a * a);
    tinggi = a;
    keliling = a + b + alas;
    luas = 0.5 * alas * tinggi;
    
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);

    return 0;
}
