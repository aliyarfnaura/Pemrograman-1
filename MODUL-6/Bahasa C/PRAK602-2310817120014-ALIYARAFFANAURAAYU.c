#include <stdio.h>

int main (void)
{
    int Kolom, Isi, N;
    scanf ("%d", &Kolom) ;
    int angka[Kolom] ;
    for (N = 0; N < Kolom; N++) {
        scanf ("%d", &Isi);
        angka[N] = Isi ;
    }
    for (N = 0; N < Kolom; N++) {
        printf ("\n%d ", angka[N] * (N + 1)) ;
    }
}