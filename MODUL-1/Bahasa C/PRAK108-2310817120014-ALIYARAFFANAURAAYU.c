#include<stdio.h>
int main()
{
    float putaran = 5, jarak = 14, keliling, jarijari;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f kilometer\n\n", jarak);
    keliling = jarak / putaran;

    printf("Jawaban :\n");
    jarijari = keliling / (2*3.14);
    printf ("Jari-jari taman yang dikelilingi Pak Dengklek adalah = %.2f kilometer", jarijari);
    return 0;
}