#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
//Lengkapi Function ini
    int Hasil = nilai1 - nilai2 ;

    return fabs(Hasil);
}
int mutlak(int angka){
//Lengkapi Function ini
if (angka<0) {
    angka = -angka;
    }
return angka ;
}

int main()
{
 int a,b,c,d;
 
 scanf("%d",&a);
 scanf("%d",&c);
 scanf("%d",&b);
 scanf("%d",&d);
 
 int Hasil = hitung(a,b) + hitung(c,d);
 printf("%d",mutlak(Hasil));
 return Hasil;
}