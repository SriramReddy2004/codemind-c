#include<stdio.h>
#include<math.h>

int main(){
    
    int n,d,temp,sum=0,p,rem;
    scanf("%d",&n);
    temp=n;
    d=log10(n)+1;
    while(n){
        rem=n%10;
        sum+=pow(rem,d--);
        n/=10;
    }
    if(sum==temp) printf("True");
    else printf("False");
    
    return 0;
}