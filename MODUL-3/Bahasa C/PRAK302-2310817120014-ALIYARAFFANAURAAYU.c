#include <stdio.h>

int main ()
{
    int Num_1;
    scanf ("%d", &Num_1);
    if (Num_1 >= 80){
        printf("A");
    }
    else if (Num_1 <=79 && Num_1 >= 70){
        printf("B");
    }
    else if (Num_1 <=69 && Num_1 >= 60){
        printf("C");
    }
    else if (Num_1 <=59 && Num_1 >= 50){
        printf("D");
    }
    else {
        printf("E");
    }
    return 0;
}