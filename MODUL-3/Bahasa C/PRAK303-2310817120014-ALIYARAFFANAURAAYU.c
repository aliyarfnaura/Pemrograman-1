#include <stdio.h>

int main ()
{
    int Num_2;
    scanf ("%d", &Num_2);
    if (Num_2 > 0){
        printf("positif");
    }
    else if (Num_2 < 0){
        printf("negatif");
    }
    else {
        printf("nol");
    }
    return 0;
}