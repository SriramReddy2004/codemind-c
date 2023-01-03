#include<stdio.h>
#include<math.h>
int main(){
    
    int n,d,rd,r,p;
    scanf("%d %d",&n,&rd);
    d=log10(n)+1;
    p=pow(10,rd);
    r=n%p;
    n/=pow(10,(d-rd));
    printf("%d",abs(r-n));
    return 0;
}