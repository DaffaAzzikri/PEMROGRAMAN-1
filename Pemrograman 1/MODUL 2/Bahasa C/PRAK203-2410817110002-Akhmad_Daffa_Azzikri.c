#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil;

    //test case 1
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);
    
    hasil = ((a - b) * i) / j - (x + y);
    
    printf("%.3f\n", hasil);

    //test case 2
    scanf("%f %f", &a, &b);
    
    scanf("%f %f", &i, &j);
    
    scanf("%f %f", &x, &y);
    
    hasil = ((a - b) * i) / j - (x + y);
    
    printf("%.3f\n", hasil);
    
    return 0;
}
