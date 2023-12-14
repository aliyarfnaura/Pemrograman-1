#include <stdio.h>

int main ()
{
    int nV, Vn;
    scanf("%d", &nV),
    scanf("%d", &Vn);
    if (nV > Vn && Vn > nV){
        printf("%d %d", Vn, nV);
    }
    else if (nV > Vn){
        printf("%d %d", Vn, nV);
    }
    else if (Vn > nV){
        printf("%d %d", nV, Vn); 
    }
    else {
        printf("%d %d", nV, Vn);
    }
    return 0;
}