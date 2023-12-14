#include <stdio.h>
#include <math.h>

int main(){

    float a,b;
    
    scanf("%f" , &a);
    scanf("%f" , &b);

    
    float alas = sqrt((b * b - a * a));
    float tinggi = a;
    float alas_ = alas;
    float Keliling = a + b + alas;
    float Luas =  (alas_ * tinggi)* 1 / 2;

    printf("Alas        = %.0f cm\n" , alas_);
    printf("Tinggi      = %.0f cm\n" , tinggi);
    printf("Keliling    = %.0f cm\n" , Keliling);
    printf("Luas        = %.0f cm^2\n" , Luas);

    return 0;
}