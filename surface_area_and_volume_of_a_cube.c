#include<stdio.h>

int main(){

    float a,volume,area;
    scanf("%f",&a);
    volume = a*a*a;
    area = 6*a*a;
    printf("Surface area = %.f and Volume = %.f",area,volume);

    return 0;
}