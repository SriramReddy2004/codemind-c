#include<stdio.h>

int main(){
    
    int n,sum=0,pro=1,rem;
    scanf("%d",&n);
    while(n){
        rem=n%10;
        sum+=rem;
        pro*=rem;
        n/=10;
    }
    if(sum==pro) printf("Spy Number");
    else printf("Not Spy Number");
    
    return 0;
}