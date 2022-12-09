#include<stdio.h>

int main(){
    
    int n,sum=0,rem,sqr;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr){
        rem=sqr%10;
        sum+=rem;
        sqr/=10;
    }
    if(sum==n) printf("Neon Number");
    else printf("Not Neon Number");
    
    return 0;
}