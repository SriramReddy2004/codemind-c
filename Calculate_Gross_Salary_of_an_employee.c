#include<stdio.h>

int main(){
    
    float bs,pf,hra,da,gs;
    scanf("%f %f %f",&bs,&hra,&da);
    pf=bs*.12;
    gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
    
    return 0;
}