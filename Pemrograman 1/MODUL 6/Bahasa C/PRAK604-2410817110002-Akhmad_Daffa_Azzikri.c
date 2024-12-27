#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], kata_kata[100];


    scanf(" %[^\n]", kode); 
    scanf(" %[^\n]", kata_kata); 



    if (strlen(kode) != strlen(kata_kata)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    int bintang = 0, pagar = 0;
    char hasil[100];

    for (int i = 0; i < strlen(kode); i++) {
        if(kode[i] == ' ' && kata_kata[i] == ' '){ 
            continue; 
        } 
        if (kode[i] == kata_kata[i]) {
            hasil[i] = '*';
            bintang++;
        } else {
            hasil[i] = '#';
            pagar++;
        }
    }
    hasil[strlen(kode)] = '\0';

    printf("%s\n", hasil);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    printf("%s\n", bintang >= pagar ? "Pesan Asli" : "Pesan Palsu");

    return 0;
}