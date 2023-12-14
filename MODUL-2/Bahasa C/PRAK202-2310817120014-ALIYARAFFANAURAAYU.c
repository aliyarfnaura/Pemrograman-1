#include <stdio.h>

int main(){

    float first, second, result;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f" , &first);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f" , &second);

    result = first + second ;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\" " , first, second, result);

    return 0;
}