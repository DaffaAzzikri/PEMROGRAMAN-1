#include <stdio.h>
#define PI 22.0/7.0

int main() {
    float jari_jari, tinggi, volume, luas, keliling;
    
    printf("");
    scanf("%f", &jari_jari);
    printf("");
    scanf("%f", &tinggi);
    
    volume = PI * jari_jari * jari_jari * tinggi;
    luas = 2 * PI * jari_jari * (jari_jari + tinggi);
    keliling = 2 * PI * jari_jari;
    
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    
    return 0;
}
