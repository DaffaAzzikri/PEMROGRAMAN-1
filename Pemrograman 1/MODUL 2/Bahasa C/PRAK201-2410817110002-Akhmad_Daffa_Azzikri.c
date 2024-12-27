#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas[10], tempat_lahir[50], alamat[100], hobby[50], no_hp[20];
    
    printf("Nama                    : ");
    gets(nama);
    printf("NIM                     : ");
    gets(nim);
    printf("Kelas Paralel           : ");
    gets(kelas);
    printf("Tempat/Tanggal Lahir    : ");
    gets(tempat_lahir);
    printf("Alamat                  : ");
    gets(alamat);
    printf("Hobby                   : ");
    gets(hobby);
    printf("No. HP                  : ");
    gets(no_hp);
    
    printf("Nama                    : %s\n", nama);
    printf("NIM                     : %s\n", nim);
    printf("Kelas Paralel           : %s\n", kelas);
    printf("Tempat/Tanggal Lahir    : %s\n", tempat_lahir);
    printf("Alamat                  : %s\n", alamat);
    printf("Hobby                   : %s\n", hobby);
    printf("No. HP                  : %s\n", no_hp);
    
    return 0;
}