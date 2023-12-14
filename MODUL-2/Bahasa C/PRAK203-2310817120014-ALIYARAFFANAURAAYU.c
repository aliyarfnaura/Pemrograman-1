#include <stdio.h>

int main(){

    float a, b, i, j, x, y, result;
    scanf("%f" , &a);
    scanf("%f" , &b);
    scanf("%f" , &i);
    scanf("%f" , &j);
    scanf("%f" , &x);
    scanf("%f" , &y);
    result = (a - b)*(i / j)-(x + y);
    printf("%.3f" , result);
    return 0;
}