#include <stdio.h>

//Buatlah Function Disini
int MaxBilangan (int w, int x, int y, int z){
    if (w > x && w > y && w > z){
        return w ;}
    else if (x > w && x > y && x > z){
        return x ;}
    else if (y > w && y > x && y > z){
        return y ;}
    else {
        return z ;}
        }
        
int main() {
int a, b, c, d; 
scanf("%d %d %d %d", &a, &b, &c, &d);
int hasil = MaxBilangan(a, b, c, d);
printf("%d", hasil); 
return 0;
}
