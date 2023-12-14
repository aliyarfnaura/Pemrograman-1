#include <stdio.h>

int main (void)
{
    int Baris, Kolom, x, y, isi ;
    scanf("%d %d", &Baris, &Kolom) ;
    int angka[Baris][Kolom] ;
    for (x = 0; x < Baris; x++) {
        for (y = 0; y < Kolom; y++) {
            scanf ("%d", &isi) ;
            angka[x][y] = isi ;
        }
    }
    printf ("\n") ;
    for (x = 0; x < Baris; x++) {
        for (y = 0; y < Kolom; y++) {
            printf ("%d ", angka[x][y]) ;
        }
        printf ("\n") ;
    }
}