#include<stdio.h>
int main()
{
    
    int a = 4, b = 5, c = 7, keliling = 16, harga = 85000, biaya;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga Tanah Per Meter adalah %d\n", harga);

    biaya = keliling * harga;

    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah :Rp %d\n", biaya);
    return 0;
}