#include <stdio.h>
int main () {
    int number, i ;
    scanf("%d", &number);
    for (i = 0; i <= number; i++){
        if (i % 2 == 1){
            printf("%d ", i); 
        }
    }
    printf("\n");
    for (i = number; i > 0; i--){
        if (i % 2 == 0){
            printf("%d ", i); 
        }
    }
    return 0;
}