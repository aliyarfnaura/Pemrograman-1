#include <stdio.h>
int main () {
    int number, i;
    char alphabet;
    scanf("%d %c", &number, &alphabet);
    for (i = 1; i <= 50; i++){
        if (i % number == 0){
            printf ("%c", alphabet);
        }
        else {
            printf ("%d", i);
        }
    }
    return 0;
}