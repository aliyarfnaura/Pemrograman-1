#include <stdio.h>
#define phi 3.142857
int main(){

    float jari, tinggi, volume, luas, keliling;
    
    scanf("%f" , &jari);
    scanf("%f" , &tinggi);

    volume       = phi*jari*jari*tinggi;
    luas         = 2*phi*jari*(jari + tinggi);
    keliling     = 2*phi*jari;

    printf("Volume      = %.2f\n" , volume);
    printf("Luas        = %.2f\n" , luas);
    printf("Keliling    = %.2f",   keliling );

    return 0;
}