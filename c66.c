#include<stdio.h>
// #define PI 3.14159265
int main(){
    int radius=5;
    const double PI=3.14159265;
    double cir =2*radius*PI;
    printf("r:%d, circumference:%1f\n", radius,cir);
    return 0;
}