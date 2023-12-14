#include <stdio.h>

int main (void)
{
    int b1, b2, x, isi ;
    scanf("%d %d", &b1, &b2) ;
    int a1[b1], a2[b2] ;
    if (b1 != b2) {
        printf ("\nJumlah tidak sama") ;
    }
    else {
        for (x = 0; x < b1; x++) {
            scanf ("%d", &isi) ;
            a1[x] = isi ;
        }
        for (x = 0; x < b2; x++) {
            scanf ("%d", &isi) ;
            a2[x] = isi ;
        }
        printf ("\n") ;
        for (x = 0; x < b1; x++) {
            printf ("%d ", a1[x] * a2[x]) ;
        }
    }
}