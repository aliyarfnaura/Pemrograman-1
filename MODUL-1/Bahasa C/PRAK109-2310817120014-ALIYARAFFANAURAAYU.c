#include <stdio.h>

int main ()
{
    int villain = 958730, hero = 5, hasil;
    printf ("Jumlah pasukan yang dibawa Yu Zhong = %d\n", villain);
    printf ("Jumlah pasukan = %d\n", hero);

    hasil = villain / hero ;
    printf ("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d", hasil);
    return 0;
}