#include<stdio.h>

int main(){

    float r,a,p;
    scanf("%f" , &r);
    a = 3.14*r*r;
    p = 2*3.14*r;
    printf("%.2f
",a);
    printf("%.2f",p);

    return 0;
}