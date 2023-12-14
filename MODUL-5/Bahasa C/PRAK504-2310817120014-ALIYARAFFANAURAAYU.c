#include <stdio.h>

int reverse(int angka){
    // Lengkapi Function ini
    int sisa ;
    int kebalikan = 0 ;
    while (angka != 0){
        sisa = angka % 10 ;
        kebalikan  = kebalikan * 10 + sisa ;
        angka = angka / 10 ;}
    return kebalikan ;
}

int main () {
    int A, B;
    scanf("%d %d",&A,&B);
    A = reverse(A) ;
    B = reverse(B) ;
    int C = A + B ;
    printf("%d", reverse(C));
}
