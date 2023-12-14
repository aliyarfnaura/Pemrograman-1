#include <stdio.h>

int main(){ 
    char nama[50];char nim[50];char kelas[50];char Ttl[50];char alamat[50];char hobby[50];char noHp[50]; 
    printf("Input \n"); 
    printf("Nama                 : "); 
    gets(nama); 
    printf("NIM                  : "); 
    gets(nim); 
    printf("Kelas paralel        : "); 
    gets(kelas); 
    printf("Tempat/Tanggal Lahir : "); 
    gets(Ttl); 
    printf("Alamat               : "); 
    gets(alamat); 
    printf("Hobby                : "); 
    gets(hobby); 
    printf("No Hp                : "); 
    gets(noHp); 

    printf("\nOutput \n"); 
    printf("Nama                 : %s\n", nama); 
    printf("NIM                  : %s\n", nim); 
    printf("Kelas Paralel        : %s\n", kelas); 
    printf("Tempat/Tanggal Lahir : %s\n", Ttl); 
    printf("Alamat               : %s\n", alamat);
    printf("Hobby                : %s\n", hobby);
    printf("No. Hp               : %s\n", noHp);

    return 0;
}
