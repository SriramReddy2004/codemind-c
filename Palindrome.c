#include<stdio.h>

int main(){
    
    int n,t,r,rev=0;
    scanf("%d",&n);
    t=n;
    while(t){
        r=t%10;
        rev=rev*10+r;
        t/=10;
    }
    if(rev==n) printf("True");
    else printf("False");
    
    return 0;
}