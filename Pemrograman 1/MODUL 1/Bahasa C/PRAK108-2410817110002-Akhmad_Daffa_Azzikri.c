#include <stdio.h>

int main (){
    float putaran = 5, jarak = 14;
    float PI= 3.14159265358979323846;
    printf("Diketahui:\nPak Dengklek mengelilingi taman = %.0f putaran\nJarak tempuh Pak Dengklek = %.0f Kilometer\nJawaban :\n", putaran, jarak);
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", (jarak/putaran) / (2*PI));

    return 0;
}