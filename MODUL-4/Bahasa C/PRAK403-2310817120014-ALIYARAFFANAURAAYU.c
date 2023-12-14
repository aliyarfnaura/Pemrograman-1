#include <stdio.h>
int main () {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    if (a > b){
        for (x = a, y = b; x >= b, y <= a; x--, y++){
            printf ("%d %d ", x, y);
            if (x == b){
               break ; }
            else {
                printf("- "); 
                }
            }
    }
    else {
        for (x = a, y = b; x <= b, y >= a; x++, y--){
            printf("%d %d ", x, y);
            if (x == b){
               break ; }
            else {
                printf("- "); 
                }
            }
    }
    return 0;
}