#include <stdio.h>

int main ()
{
    int Num_3;
    scanf ("%d", &Num_3);
    if (Num_3 == 0){
        printf("Nol");
    }
    else if (Num_3 >= 1 && Num_3 <= 9){
        printf("Satuan");
    }
    else if (Num_3 >= 10 && Num_3 <= 19){
        printf("Belasan");
    }
    else if (Num_3 >= 20 && Num_3 <= 99){
        printf("Puluhan");
    }
    else {
        printf("Anda Menginput Melebihi Limit Bilangan");
    }
    return 0;
}