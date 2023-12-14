#include<stdio.h>
int main()
{
    int a = 400000, b = 350000, hargasepatuADiskon, hargasepatuBDiskon;

    printf ("Harga sepatu A adalah %d\n", a);
    printf ("Harga sepatu B adalah %d\n", b);   

    float diskonsepatuA = 0.13;
    float diskonsepatuB = 0.21;

    hargasepatuADiskon = a * (1 - diskonsepatuA);
    hargasepatuBDiskon = b * (1 - diskonsepatuB);

    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", hargasepatuADiskon);
    printf("Sepatu A mendapat diskon 21%% sehingga harganya menjadi %d\n", hargasepatuBDiskon);

    return 0;

}



