#include<stdio.h>
#include<math.h>

int main(){
    
    float a,b,c,d,dis;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    dis=sqrt(pow(c-a,2)+pow(d-b,2));
    printf("%.4f",dis);
    
    return 0;
}