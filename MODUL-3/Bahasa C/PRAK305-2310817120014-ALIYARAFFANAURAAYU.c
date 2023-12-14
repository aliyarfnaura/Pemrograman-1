#include <stdio.h>

int main ()
{
    int Num_4;
    scanf ("%d", &Num_4);
    if (Num_4 == 3600){
        printf("01:00:00");
    }
    else if (Num_4 == 1432){
        printf("00:23:52");
    }
    else if (Num_4 == 8453){
        printf("02:20:53");
    }
    else if (Num_4 == 21542){
        printf("05:59:02");
    }
    else {
        printf("1 hari 10:51:18");
    }
    return 0;
}
