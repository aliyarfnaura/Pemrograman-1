#include <stdio.h>
#include <math.h>

int main ()
{
    int alas = 5, tinggi = 12, a, b, c, kel, luas;

    alas = 5 ;
    tinggi = 12 ;
    printf ("Diketahui :\n");
    printf ("Alas = %d cm\n", alas);
    printf ("Tinggi = %d cm\n\n", tinggi);
    printf ("Jawab :\n");
    
    a = tinggi ;
    b = sqrt((alas * alas) + (tinggi * tinggi));
    c = alas ;
    kel = a + b + c ;
    luas = alas * tinggi / 2 ;
    printf ("Sisi A = %d cm\n", a);
    printf ("Sisi B = %d cm\n", b);
    printf ("Sisi C = %d cm\n", c);
    printf ("Keliling = %d cm\n", kel);
    printf ("Luas = %d cm", luas);
    return 0;
}