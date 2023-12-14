#include <stdio.h>
#include <string.h>

int main (void)
{
    char k1[1000], k2[1000] ;
    int i1, i2, n, b = 0, p = 0 ;
    scanf (" %[^\n]%*c", &k1) ;
    scanf (" %[^\n]%*c", &k2) ;
    i1 = strlen (k1) ;
    i2 = strlen (k2) ;
    if (i1 != i2) {
        printf ("\nPanjang kalimat berbeda, pesan palsu") ; }
    else {
        for (n = 0 ; n < i1 ; n++) {
            if (k1[n] == k2[n]) {
                if (k1[n] == ' ') {
                    printf (" ") ; }
                else {
                    printf ("*") ;
                    b++ ; } }
            else {
                printf ("#") ;
                p++ ; } }
        printf ("\n* = %d", b) ;
        printf ("\n# = %d", p) ;
        if (b >= p) {
            printf ("\nPesan Asli") ; }
        else {
            printf ("\nPesan Palsu") ; } }
}